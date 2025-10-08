// IR Sensor Object Detection with Built-in LED

// Define pins
const int irSensorPin = 2;     // IR sensor output pin
const int ledPin = LED_BUILTIN; // Built-in LED pin (usually 13)

void setup() {
  pinMode(irSensorPin, INPUT);   // Set IR sensor pin as input
  pinMode(ledPin, OUTPUT);       // Set LED pin as output
  Serial.begin(9600);            // For debugging
}

void loop() {
  int sensorValue = digitalRead(irSensorPin); // Read IR sensor output

  if (sensorValue == LOW) {
    // When object is detected (depends on your sensor type)
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected!");
  } else {
    // No object detected
    digitalWrite(ledPin, LOW);
    Serial.println("No object");
  }

  delay(100); // Small delay for stability
}
