int count = 0;
int pulse1, pulse2 = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (50,INPUT);
}

void loop() {
  
  
  pulse1 = digitalRead(50);
  
  if((pulse1-pulse2)== 1){
    count++;
  }
  //Serial.print(pulse1);
  delay(10);
  pulse2 = pulse1;
  Serial.print("Count = ");
  Serial.println(count);

}
