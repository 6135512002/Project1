const int pir = 12;
const int ledPin =  13;

int pirState = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Project Thailand ~^.^~ ");
  pinMode(ledPin, OUTPUT);
  pinMode(pir, INPUT);
}

void loop() {
  pirState = digitalRead(pir);

  Serial.print("pirState : "); Serial.println(pirState);

  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH);
//      Serial.println("HHHHHH");
  }

  else if (pirState == LOW) {
    digitalWrite(ledPin, LOW);

  }
   
}
