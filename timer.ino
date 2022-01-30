/*==========================================
 Title:  LED Blink for 1000 milliseconds Arduino Nano using  millis()
 Author: Amith G Nair
 Date:  18 Feb 2021
========================================== */
 // for the Testing purpose i am using arduino Nano build in LED ( digital Pin 13 ) 
 // If you want to try this code in esp32  you need toadd the header files and other required libraries 
 // vist electrorules.com

 const int ledPin =  13      // the number of the LED pin
int ledState = LOW;             // ledState used to set the LED


unsigned long previousMillis = 0;        // will store last time  status of LED was updated
const long interval = 1000;             // interval at which to blink (milliseconds)

void setup() {
  
  pinMode(ledPin, OUTPUT);  // set the digital pin as output:
}

void loop() {
 
 // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
      
    previousMillis = currentMillis; // save the last time you blinked the LED
    if (ledState == LOW)  // if the LED is off turn it on and vice-versa:
	{
      ledState = HIGH;
    } else 
	{
      ledState = LOW;
    } 
    digitalWrite(ledPin, ledState); // set the LED with the ledState of the variable:
  }
}