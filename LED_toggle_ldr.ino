int ldr=A0;
int value=0;
void setup() {
Serial.begin(9600);
pinMode(3,OUTPUT);
}

void loop() {
value=analogRead(ldr);
Serial.println("LDR value is :");
Serial.println(value);
if(value<300)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
}
