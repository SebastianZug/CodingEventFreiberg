const int ledPin = 25;   // Specific for UNO REV 2! 
//const int ledPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // prepare serial communication
  Serial.begin(9600);
  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
  Serial.println("Initialization finished ... ");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print("An ... ");
  delay(1000);                  // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  Serial.println(" und Aus");
  delay(1000);                  // wait for a second
}
