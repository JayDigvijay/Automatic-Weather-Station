unsigned long mils = 0;
int count = 0;
int pulse1, pulse2 = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (2,INPUT);
}

void loop() {
  pulse1 = digitalRead(2);
  
  if((pulse1-pulse2)== 1){
    count++;
  }
  //Serial.print(pulse1);
  delay(10);
  pulse2 = pulse1;
  //Serial.print("Count = ");
  //Serial.println(count);
  mils = millis();
  if(mils%5000 < 10){
    Serial.print("Pulses in time =");
    Serial.println(count);
    count = 0;
  }
}
