//1 Replace all ? with pin mappings
//2 Select speed value
//3 Select proper HIGH/LOW for forward function
//4 create backward function and stop function
//5 Make motor go forward, backward, and then stop

const int speed = ?;
const int forward = ?; 
const int backward = ?; 

void moveforward();

void setup() {
  pinMode(forward, OUTPUT/INPUT);
  pinMode(backward, OUTPUT/INPUT);  
  pinMode(speed, OUTPUT/INPUT);   

  analogWrite(speed, 0-255); 
}


void loop() {

  moveforward();
  delay(1000);

} 

  void moveforward() {
    digitalWrite(forward, HIGH/LOW);  
    digitalWrite(backward, HIGH/LOW);
  }


  
