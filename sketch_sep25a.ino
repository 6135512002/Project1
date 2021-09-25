 int buttonPin = 2;     
 int ledPin =  9;      
 int buttonState = 0;       

void setup() {
Serial.begin(9600);
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT);     
}

void loop(){
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {     
    // turn buzzer on:    
    Serial.println("turn buzzer on");
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn buzzer off:
    Serial.println("turn buzzer off");
    digitalWrite(ledPin, LOW); 
  }
  delay(500);
}
