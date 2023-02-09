# High-Beam_Detection
A solution for switching high beams in cars.

# Title:
High beam Controller

# Brief Description:
- There are two modes - Street Mode where only low beam light can be used and Highway Mode where the high beam is used when speed exceeds 50 kmph. 
- When the vehicle is using high-beam in highway mode and another vehicle approaching with high beam on the opposite lane, the sensors detect the oncoming vehicle, sends digital data to the microcontroller, which in turn switches the light to low-beam for a short duration of time and then reverts back to high-beam after fusing the data from both the sensors. This totally  avoid vision inconvenience to both the drivers

# Hardware Used:
-	Arduino nano
-	Ultrasonic sensor(ToughSonic 50 Ultrasonic sensor)
-	Optical Sensor(Adafruit TSL2591 High Dynamic Range Digital Light Sensor – STEMMA QT

# Software/Simulator Used:
-	C++ programming language
-	Wokwi(https://wokwi.com/)


# Process flow:

![process](https://github.com/Wr4th100/High-Beam_Detection/blob/main/process.png?raw=true)
