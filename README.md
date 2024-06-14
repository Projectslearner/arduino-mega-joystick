# Joystick

#### Project Overview

The Joystick project demonstrates how to use a joystick module with an Arduino Mega to read the X and Y axis positions and the button state. The project prints the joystick's position and button state to the Serial Monitor and lights up an LED when the button is pressed.

#### Components Needed

- **Arduino Mega**
- **Joystick Module**
- **LED**
- **Resistor (220 ohms)**
- **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect the Joystick to Arduino Mega:**
   - **VCC** of the Joystick to **5V** on Arduino Mega.
   - **GND** of the Joystick to **GND** on Arduino Mega.
   - **VRx** of the Joystick to analog pin A0 (`xPin`) on Arduino Mega.
   - **VRy** of the Joystick to analog pin A1 (`yPin`) on Arduino Mega.
   - **SW** of the Joystick to digital pin 2 (`buttonPin`) on Arduino Mega.

2. **Connect the LED to Arduino Mega:**
   - **Anode** (longer leg) of the LED to digital pin 13 (`ledPin`) on Arduino Mega through a 220-ohm resistor.
   - **Cathode** (shorter leg) of the LED to **GND** on Arduino Mega.

#### Instructions

1. **Circuit Setup:**
   - Connect the Joystick module and LED to the Arduino Mega as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Mega.
   - Open the serial monitor in Arduino IDE (set to 9600 baud).
   - Move the joystick and observe the X and Y values printed to the Serial Monitor.
   - Press the joystick button and observe the button state and LED behavior.

#### Applications

- **Game Controllers:** Use in DIY game controllers to provide analog input for game characters or vehicles.
- **Robotics:** Integrate into robotic projects to control robot movements.
- **Learning Projects:** Great for learning how to interface analog sensors and handle user input in microcontroller projects.

#### Notes

- Adjust the delay in the `loop` function to control the frequency of readings.
- Ensure the joystick is centered for accurate readings. You may need to calibrate the joystick based on your specific module.
- The internal pull-up resistor is used for the button pin to keep it in a known state when not pressed.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-joystick)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner