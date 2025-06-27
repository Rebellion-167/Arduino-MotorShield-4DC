# Arduino Uno 4-DC Motor Control

This project demonstrates how to control **4 DC motors** using an **Arduino Uno** and an **L293D Motor Shield (Adafruit V1 or compatible)**. It supports basic movement functions - forward, backward, and stop - making it ideal for beginner robotics, motor testing , or creating a basic wheeled platform.

## Features

- Controls up to **4 DC motors** simultaneously
- Movement options : **Forward**, **Backward**, and **Stop**
- Uses **Adafruit Motor Shield Library**
- Simple, readable code structure
- Easily expandable for more advance features

## Hardware Required

- Arduino Uno
- L293D Motor Shield (Adafruit V1 or clone)
- 4 x DC Motors
- External power supply (recommended for motor power)
- USB cable & Jumper wires


## How It Works

Once uploaded, the Arduino runs a repeating sequence:
- Moves all motors **forward** for a set time
- Stops them
- Then moves them **backward**
- Stops again before looping

This provides a clear, hands-on example of bidirectional motor control using a motor shield.

## Getting Started

1. Install the **Adafruit Motor Shield** library from Arduino Library Manager.
2. Wire up the motors to the shield's M1-M4 ports
3. Power the motors with a external supply (7-12V recommended).
4. Upload the code using the Arduino IDE.
5. Watch the motors come to life!
