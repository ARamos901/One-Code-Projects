

import speedtest #In order to use this code make sure to have the speedtest-cli pip installed.
                 #If you don't type "pip install speedtest-cli" into your terminal to install it.

import time

Test = speedtest.Speedtest()

down = Test.download()
up = Test.upload()
ping = Test.results.ping


while True:
    print("Please choose what speed you would like to know about your internet.")
    time.sleep(2.5)
    print("Type 1 for your download speed.")
    time.sleep(1.5)
    print("Type 2 for your upload speed.")
    time.sleep(1.5)
    print("Type 3 for your ping.")
    time.sleep(1.5)
    
    x = input("Type your choice here: ")
    
    if x == '1':
        print("Getting your download speed...")
        time.sleep(3)
        print(f"Your download speed is {down / 1_000_000:.2f} Mbps")
        time.sleep(1.5)
    
    elif x == '2':
        print("Getting your upload speed...")
        time.sleep(3)
        print(f"Your upload speed is {up / 1_000_000:.2f} Mbps")
        time.sleep(1.5)
        
    elif x == '3':
        print("Getting your ping...")
        time.sleep(3)
        print(f"The amount of time it takes to ping your device is {ping} ms")
        time.sleep(1.5)
    
    elif x.upper() == 'Q':
        print("Thank you for using my internet speed tester. Goodbye!")
        time.sleep(2.5)
        break
    
    else:
        print("Invalid input. Please try again.")
        time.sleep(1.5)
    
    
    
    
    
    
        
    
        


