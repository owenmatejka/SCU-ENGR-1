/*
Lab #5 Part 2
ENGR 1L
Owen Matejka
1 February 2022
*/


// Variables
int LED = 3;
int Counter = 0;
int ledState = LOW;

// Setup
void setup() {
  
  pinMode(LED, OUTPUT);
  
}

// Loop Code
void loop() { // This code will run repeatedly until the program is terminated
  
  digitalWrite(LED, HIGH);
  delay(5000);
  digitalWrite(LED, LOW);
  delay(3000);

  for(int i = 0; i < 10; i++) {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
  
}
