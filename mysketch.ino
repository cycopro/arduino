const int sensorPin = 12;
const int ledPin1 = 6;
const int ledPin2 = 4;
const int ledPin3 = 2;


void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  
}

void loop(){
  
  if (digitalRead(sensorPin) == HIGH) {
    
    digitalWrite(ledPin1, !
    digitalRead(ledPin1));
    delay(1000);
    digitalWrite(ledPin2, !
    digitalRead(ledPin2));
    delay(1000);
    digitalWrite(ledPin3, !
    digitalRead(ledPin3));
    delay(1000);
    
  }
  
}