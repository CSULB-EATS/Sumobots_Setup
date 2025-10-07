const int trigPin = 12;
const int echoPin = 13;

long duration;
int distance;

void setup() {
     Serial.begin(9600);
     
     pinMode(trigPin, OUTPUT);  
     pinMode(echoPin, INPUT);      
     analogWrite(enable1, 255);
     analogWrite(enable2, 255);

}

void loop() {
  // clear trigPin
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

       
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

 // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(5);

  
}
 
