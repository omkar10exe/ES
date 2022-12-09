const int LED=13;
const int sound=A2;
const int threshold=40;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(sound,INPUT);
}

void loop() {
  int soundsense=analogRead(sound);
  if(soundsense>=threshold) {
    digitalWrite(LED,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
