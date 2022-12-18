// Blink SOS on built in LED on Hero board

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second

  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second

   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
   delay(2000); // wait for 2 seconds
}