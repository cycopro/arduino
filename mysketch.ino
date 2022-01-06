const int sensorPin = 12;
const int ledPin1 = 6;
const int ledPin2 = 4;
const int ledPin3 = 2;

int i = 0;
void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop(){
  i = digitalRead(sensorPin);
  if (i == HIGH) {
    
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin3, HIGH);
    delay(1000);
    
  }
  i = 0;
  
  i = digitalRead(sensorPin);
  if(i == HIGH){
    digitalWrite(ledPin3, LOW);
    delay(1000);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
  }
  
}