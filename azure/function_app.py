import logging
import azure.functions as func
import re

app = func.FunctionApp()

@app.event_hub_message_trigger(arg_name="azeventhub",
                               event_hub_name="sssmHub",
                               connection="sssmHub_RootManageSharedAccessKey_EVENTHUB") 

def eventhub_trigger_sssm(azeventhub: func.EventHubEvent):
    logging.info('Python EventHub trigger processed an event: %s', azeventhub.get_body().decode('utf-8'))

    payload = azeventhub.get_body().decode('utf-8')
    logging.info(f"Payload: {payload}")

    sens_data = [float(s[0]) for s in re.findall(r'(\d+(\.\d+)?)|(\.\d+)', payload)]
    print(sens_data)

    temp = sens_data[1]
    humi = sens_data[2]
    photo = sens_data[3]
    aq = sens_data[4]

    # Prediction Algorithm-----------------------------------------------------
    # safe_to_ride = True
    additional_message = ""

    if(humi >= 50): # Humidity limit beyond which rain is possible 
        # safe_to_ride = False
        additional_message = additional_message + "There is a chance it is raining or will be raining, check before riding. Do not exceed 20 mph.\n"

    if(temp < 10): # Temperature limits for safe operation
        # safe_to_ride = False
        additional_message = additional_message + "DO NOT RIDE! It's too cold outside, may not be safe for you and the scooter's battery.\n"

    if(35 < temp): # Temperature limits for safe operation
        # safe_to_ride = False
        additional_message = additional_message + "DO NOT RIDE! It's too hot outside, may not be safe for you and the scooter's battery.\n"

    if(photo <= 1000): # Make sure there is enough light
        # safe_to_ride = False
        additional_message = additional_message + "DO NOT RIDE!, it's too dark outside.\n"

    if(aq >= 100): # Minimum VOC rating to safelt go outdoors
        # safe_to_ride = False
        additional_message = additional_message + "DO NOT RIDE without p100 or other respirator.\n"

    if(additional_message == ""):
        additional_message = "It is safe to ride. BE SAFE! Obey all traffic laws."

    print(additional_message, "\n\n")
