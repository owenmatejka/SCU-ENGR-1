/*
Lab #5 Part 1
ENGR 1L
Owen Matejka
1 February 2022
*/

// Configuration
const int waitTime = 500; // Configured to wait 1/2 second

// Variables
int LED = LED_BUILTIN;
int Counter = 0;
int ledState = LOW;

// Setup
void setup() {
  
  pinMode(LED, OUTPUT);
  
}

// Loop Code
void loop() { // This code will run repeatedly until the program is terminated using exit()

  if (ledState == LOW) { // Checks state
    digitalWrite(LED, HIGH); // Turns the LED on
    ledState = HIGH;
  } else {
    digitalWrite(LED, LOW); // Turns LED off
    ledState = LOW;
  }
  
  delay(waitTime); // Waits
  
  Counter++;
  if (Counter >= 120) { // If the loop has run 120 times (60s), the program terminates
    exit(0);
  }
  
}
