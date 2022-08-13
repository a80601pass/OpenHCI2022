//Lesson-1 LED Blink
//The LED will turn on for one second and then turn off for one second
//CAVEDU Education 2020
int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);//更改括號內數字決定閃爍頻率，單位為毫秒
  digitalWrite(ledPin, LOW);
  delay(1000);//更改括號內數字決定閃爍頻率，單位為毫秒
}
