/*
    Project name : Joystick
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-joystick
*/

const int xPin = A0; // Pin connected to the X axis of the joystick
const int yPin = A1; // Pin connected to the Y axis of the joystick
const int buttonPin = 2; // Pin connected to the button of the joystick
const int ledPin = 13; // Pin connected to an LED

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop() {
  // Read the X and Y axis values
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);
  
  // Read the button state
  int buttonState = digitalRead(buttonPin);

  // Print the X and Y values
  Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print(" | Y-axis: ");
  Serial.print(yValue);

  // Print the button state
  Serial.print(" | Button: ");
  if (buttonState == LOW) {
    Serial.println("Pressed");
    digitalWrite(ledPin, HIGH); // Turn on the LED when the button is pressed
  } else {
    Serial.println("Not Pressed");
    digitalWrite(ledPin, LOW); // Turn off the LED when the button is not pressed
  }

  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
