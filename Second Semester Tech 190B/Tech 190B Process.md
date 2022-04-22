# Overview - Second Semester for Senior Project - Tech 190B - Spring 2022
- During the second semester of my Senior Project class, we are instructed to create the final version of our project idea. For this semester I was in charge of the same items as I was last semester, the coding and the electronic circuit.



### Final Draft of Project Idea 
-  Our project idea is to create a Voice Activated Drink Maker, a machine that when prompted will create the desired drink a user asks for. 

### Materials Needed to Create this Project
- For this project, I have incorporated Amazon Alexa for the voice recognition part of the project. By using Amazon Alexa's speech recognition it will be easier for the machine to understand a variety of different voices. 
- Other materials needed for this project are: 4 Channel 5V Relay Module, ESP8266 Board, 12V 10A 120W AC to DC power supply, 4 Peristalic Pumps, Breadboard, 9V battery clip, 3 Prong Power Supply Cord, Amazon Echo Dot, 3mm tube for pumps.

### Steps to create this Project
1) Create a Sinric Pro account [here](https://portal.sinric.pro/register) 
2) From the homepage, click on devices on the left dashboard, then add device. Complete this process for the other 3 Pumps.
<img width="500" height = "400" alt="Screen Shot 2022-04-22 at 2 09 03 PM" src="https://user-images.githubusercontent.com/95317911/164793796-e5309fb1-28a1-417f-964c-24ea74868e00.png"> 

Next, you have the ability to send push notifications to your mobile device. Select your desired settings and then click Next. 

<img width="500" height ="400" alt="Screen Shot 2022-04-22 at 2 12 36 PM" src="https://user-images.githubusercontent.com/95317911/164794183-69f3d185-778b-4409-b9c5-960424e5078a.png">

Then, you have the ability to set Timers. Select your desired settings and then click Next.

<img width="500" height = "400" alt="Screen Shot 2022-04-22 at 2 14 12 PM" src="https://user-images.githubusercontent.com/95317911/164794355-8eb7cbfb-859d-4276-8319-999060d230e1.png">

Lastly, you will be brought to the Energy Usage Estimation. Select your desired settings and then Click Next. 

<img width="500" height = "400" alt="Screen Shot 2022-04-22 at 2 15 49 PM" src="https://user-images.githubusercontent.com/95317911/164794549-a4e8eeb8-6332-4711-af13-5ebb064f7c8f.png">

3) After creating all of your pumps, go to the Devices tab and copy all of your Pump ID numbers. They are listed underneath the Pumps you have created. 

<img width="873" alt="Screen Shot 2022-04-22 at 2 17 13 PM" src="https://user-images.githubusercontent.com/95317911/164795564-32411b81-696a-4ac9-9d76-43b67e98bdce.png">

4) In the Credentials Tab, copy your APP KEY and APP SECRET into a safe place, we will need these credentials later on in the code. 

<img width="933" alt="Screen Shot 2022-04-22 at 2 21 21 PM" src="https://user-images.githubusercontent.com/95317911/164796320-2ab31727-4f51-4afb-84e7-4c93a098ff39.png">

5) Download the Alex App on your phone. Then go to Skills & Games, enter Sinric Pro in the search bar, and select the skill and click on enable. 
6) Then enter your login details you used to create your Sinric Pro account. 
7) Download the Arduino IDE software [Here](https://www.arduino.cc/en/software) 
8) Download the necessary Libraries for our code to work. Click on Tools, then Manage Libraries, search and Install the following Libraries: WiFi, ArduinoJson, SinricPro.
9) To add your ESP8266 Board to Arduino. Click on Preferences, then in the Additonal Boards Manager URLs paste this link http://arduino.esp8266.com/stable/package_esp8266com_index.json and then click OK on the bottom right. 
10) Upload the [Code](https://github.com/sammiet03/VoiceActivatedDrinkMaker/blob/main/Second%20Semester%20Tech%20190B/FINAL_USE.ino) 
11) Make sure that you have selected the right COM port, the correct Board, and the correct BAUD Rate. 
12) Then click Verfiy and Upload.
13) After the code is finished uploading, click on the serial monitor to view your ESP8266 IP Address and that it has connected to Sinric Pro. 
14) In order for the circuit to create drinks. Go to the Alexa App, Select on the More Tab, then Routines, click on the + icon, Enter the routine name this can be the type of drink you are going to make example would be "Strawberry Lemonade"
15) Then click on Add Action, then click Custom at the top, Enter the phrases you would use to prompt Alexa to carry out the Routine. Examples of this would be "make me a strawberry lemonade", "make strawberry lemonade", etc. 
16) Then click on Add Action, Click on Smart Home, then your desired pump (say that this pump will be for the Lemonade), for Power leave it at ON, then click Next. 
17) Then add the next pump (say that this pump will be used for the strawberry flavoring), for Power leave it at ON, then click next. 
18) Next, add another Action, scroll down to Wait, and click the amount of time you want both of the pumps to be on for.
19) Lastly, make sure you repeat the steps 15 & 16, but for the Power select OFF so that your pumps will power off after completing the Routine.  
20) After all of these steps you will have the ability to speak to your Echo and Alexa will prompt the machine to create the drink in your routine! :tada:















### Circuit Layout 
- Here is the circuit layout I have planned for my project
![Untitled presentation](https://user-images.githubusercontent.com/95317911/164792725-10dd05af-28fa-4a52-b71e-66fa718b9bd6.png)





### Notes the Remeber 
- When writing the code for your circuit, you need to define the GPIO pin correlated to the digital pin on your ESP8266. Some ESP8266 boards have different GPIO numbers, I recommend researching a GPIO pin diagram to ensure that you are writing the correct numbers in your code. 
- For the code in my project, Pump 1 = GPIO 4 this corresponds to pin D2 on ESP8266, Pump2 = 2 this corresponds to pin D4 on ESP8266, Pump 3 = 16 this corresponds to pin D0 on ESP8266, Pump 4 = 14 this corresponds to pin D5 on ESP8266 
- Here are the diagrams I used for my specific ESP8266 board that would be the WeMos D1 R2.
![85bb0e6c2d27ffc75270505047da5ad6fb302b9f_2_500x265](https://user-images.githubusercontent.com/95317911/164788969-d006f7ca-b4dc-497e-93a5-20fb0f007841.jpg)
![Reloaded-295x300](https://user-images.githubusercontent.com/95317911/164789128-6a9cc4e1-2daa-49c2-ace3-8de79a47a1ab.jpg)


### Here is the Code for my Project 
[Code for Circuit](https://github.com/sammiet03/VoiceActivatedDrinkMaker/blob/main/Second%20Semester%20Tech%20190B/FINAL_USE.ino)
