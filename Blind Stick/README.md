## INTRODUCTION

Currently there are thousands of blind people all over the globe. These include people from low sight seeing to complete lost of visual. They find it very difficult while crossing the road or reaching to their respective destination with the help any other individual. The traditional stick cannot help to detect the obstacles in front or the potholes in the way. It is outdated. Hence there is a need to update it using today's technology.

THE SMART BLIND STICK  simplicity of the proposed design makes it easy to use by any person and at the same time the cost of manufacturing such sticks is kept low. The power consumption of the proposed stick is low and can be operated easily. It is also very cheap compared to the conventional ones. Obstacle and hole can be determined easily by sensor readings

## WORKING 

The smart stick for the blind as the name suggests is a device for the visually impaired to guide the user to their respective destination and avoiding to collide with obstacles. It uses two ultrasonic sensors HC SR 04 to detect the depth below or the obstacles in between. Along with that, it uses Arduino as the main control. Whenever there is any obstacle in the front, The sensor will detect the distance from the obstacle and send it to the controller. The controller will then turn on the buzzer and vibrator motor simultaneously.

## HARDWARE REQUIREMENTS

- Arduino uno
- Ultrasonic sensor
- Buzzer
- Vibrator motor
- Jumper wires

## CIRCUIT
![/Blind Stick/circuit/circuit.png](https://github.com/rushixkesh/GPN_projects/blob/main/Blind%20Stick/circuit/circuit.png)

## CIRCUIT CONNECTION 

- Ultrasonic VCC to Arduino 5v
- Ultrasonic GND to Arduino GND
- Ultrasonic TRIG to Arduino pin 13
- Ultrasonic ECHO to Arduino pin 12
- Buzzer +ve to Arduino pin 6
- Buzzer -ve to Arduino GND
- Vibrator motor pin 1 to Arduino pin 7
- Vibrator motor pin 2 to Arduino GND

## ADVANTAGES

- Obstacle detection with indication support.
- Simple to use and low cost.
- Low power consumption
 
 ### @rushixkesh 2022 👾:
