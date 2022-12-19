/*
Control three different LED Using the DIP switches
Similar work was done yesterday with a dedicated SOS light along with a general light
*/
int LED1 = 12; // Blue light
int LED2 = 11; // Red light
int LED3 = 10; // White light
int Switch1 = 4;
int Switch2 = 3;
int Switch3 = 2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // Blue light control
  if (digitalRead(Switch1) == HIGH){
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
  // Red light control
  if (digitalRead(Switch2) == HIGH){
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
  // White light control
  if (digitalRead(Switch3) == HIGH){
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
}
