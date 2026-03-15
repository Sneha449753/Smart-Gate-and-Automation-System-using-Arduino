# Smart Gate and Device Automation System
This project implements a smart automation system using an Arduino Uno. An IR sensor detects objects and a servo motor opens the gate automatically. A relay module controls electrical devices, while an HC-05 Bluetooth module enables manual control from a smartphone.
## Features
- Automatic object detection using IR sensor  
- Gate control using servo motor  
- Device control using relay module  
- Manual control via Bluetooth  

## Hardware Components
| Component | Cost |
|-----------|----------------|
| Arduino Uno | ₹300–₹350 |
| IR Sensor | ₹25–₹50 |
| Servo Motor | ₹80–₹200 |
| Relay Module | ₹25–₹50 |
| HC-05 Bluetooth | ₹150–₹250 |
| Breadboard & Wires | ₹100–₹250 |

## Software
- Arduino IDE  
- Bluetooth terminal app (Android)

## Working
1. IR sensor detects an object near the gate.  
2. Arduino processes the signal.  
3. Servo motor opens the gate automatically.  
4. Relay switches a connected device.  
5. Bluetooth allows manual control from a phone.


## Circuit Connections
**IR Sensor:** VCC→5V, GND→GND, OUT→Pin 2  
**Servo Motor:** VCC→5V, GND→GND, Signal→Pin 9  
**Relay Module:** VCC→5V, GND→GND, IN→Pin 7  
**HC-05:** VCC→5V, GND→GND, TX→RX, RX→TX  

## Applications
- Smart parking gates  
- Home automation  
- Automatic door systems  
- Security access control  

## Future Scope
- IoT control using ESP8266/ESP32  
- Mobile application interface  
- Additional sensors for security  

## Author
Sneha  
Electronics and Communication Engineering Student
