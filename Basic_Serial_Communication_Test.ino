// Serial Communication Test

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud
  Serial.println("Serial communication started!");
}

void loop() {
  // Send a message every second
  Serial.println("Hello from Arduino!");
  delay(1000);

  // Check if data is received from the Serial Monitor
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    Serial.print("You typed: ");
    Serial.println(input);
  }
}
