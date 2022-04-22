# Overview - Second Semester for Senior Project - Tech 190B - Spring 2022
- During the second semester of my Senior Project class, we are instructed to create the final version of our project idea. For this semester I was in charge of the same items as I was last semester, the coding and the electronic circuit.



### Final Draft of Project Idea 
-  Our project idea is to create a Voice Activated Drink Maker, a machine that when prompted will create the desired drink a user asks for. 

### Materials Needed to Create this Project
- For this project, I have incorporated Amazon Alexa for the voice recognition part of the project. By using Amazon Alexa's speech recognition it will be easier for the machine to understand a variety of different voices. 
- Other materials needed for this project are: 4 Channel 5V Relay Module, ESP8266 Board, 12V 10A 120W AC to DC power supply, 4 Peristalic Pumps, Breadboard, 9V battery clip, 3 Prong Power Supply Cord, Amazon Echo Dot.  


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
[Code for Circuit]()
