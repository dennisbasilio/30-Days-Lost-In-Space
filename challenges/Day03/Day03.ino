/*
Implement DIP switch to control LED and SOS lights.
*/

int Light = 12; // Light LED
int SOS = 9; // SOS LED
int Switch1 = 2; // Turn on light
int Switch3 = 7; // Turn on SOS

void setup() {
  pinMode(Light, OUTPUT);
  pinMode(SOS, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // Light Switch
  if (digitalRead(Switch1) == HIGH){
    digitalWrite(Light, HIGH);
  }
  else {
    digitalWrite(Light, LOW);
  }

  // SOS Switch
  if (digitalRead(Switch3) == HIGH){
    digitalWrite(SOS, HIGH);
    delay(100);
    digitalWrite(SOS, LOW);
    delay(100);
    digitalWrite(SOS, HIGH);
    delay(100);
    digitalWrite(SOS, LOW);
    delay(100);
    digitalWrite(SOS, HIGH);
    delay(100); 
    digitalWrite(SOS, LOW);
    delay(1000);

    digitalWrite(SOS, HIGH);
    delay(1000);
    digitalWrite(SOS, LOW);
    delay(1000);
    digitalWrite(SOS, HIGH);
    delay(1000);
    digitalWrite(SOS, LOW);
    delay(1000);
    digitalWrite(SOS, HIGH);
    delay(1000);
    digitalWrite(SOS, LOW);
    delay(1000);

    digitalWrite(SOS, HIGH);
    delay(100);
    digitalWrite(SOS, LOW);
    delay(100);
    digitalWrite(SOS, HIGH);
    delay(100);
    digitalWrite(SOS, LOW);
    delay(100);
    digitalWrite(SOS, HIGH);
    delay(100);
    digitalWrite(SOS, LOW);
    delay(2000);
  }
  else {
    digitalWrite(SOS, LOW);
  }
}
