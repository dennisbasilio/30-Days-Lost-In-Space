// Blink SOS via LED

int Light = 12; //HERO board pin 12

void setup() {
  pinMode(Light, OUTPUT);
}

void loop() {
  digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second

  digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second

   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(100); // wait for a 1/10 of a second
   digitalWrite(Light, LOW); // turn the LED off by making the voltage LOW
   delay(2000); // wait for 2 seconds
}
