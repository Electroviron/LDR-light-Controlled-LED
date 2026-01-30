// declare pin for LDR and LED
int sensorPin = A0;
int ledPin = 3;


void setup(){
  // start serial COM
  Serial.begin(9600);

  // configure LED pin
  pinMode(ledPin, OUTPUT);
}


void loop(){
     int sensorVal = analogRead(sensorPin);
     
     Serial.println(sensorVal);

     if(sensorVal > 400){
      digitalWrite(ledPin, LOW);
     }
     else{
      digitalWrite(ledPin, HIGH);
     }

     delay(500);
}