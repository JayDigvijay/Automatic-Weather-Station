
int stationID = 12345;
int temp=100;
int hum = 10;
float pressure = 940.14;
float wspeed = 23;
float wdirection = 68; 

void setup(){
    Serial1.begin(9600);  
    Serial.begin(9600);  
    delay(500);
  
    Serial1.println("AT+CIPSHUT");
    delay(1000);
    printSerialData();
  
    Serial1.println("AT+CIPMUX=0");
   delay(2000);
   printSerialData();
   
   Serial1.println("AT+CGATT=1");
   delay(1000);
   printSerialData();
  
   Serial1.println("AT+SAPBR=3,1,\"Contype\",\"GPRS\"");
   delay(1000);
   printSerialData();
  
   Serial1.println("AT+SAPBR=3,1,\"APN\",\"internet\"");
   delay(1000);
   printSerialData();
  
   Serial1.println("AT+SAPBR=1,1");
   delay(1000);
   printSerialData();
  
   Serial1.println("AT+SAPBR=2,1");
   delay(1000);
   printSerialData();
   
   Serial1.println("AT+CSQ"); //STRENGTH
   delay(2000); 
   printSerialData();
  
   Serial1.println("AT+HTTPINIT"); //init the HTTP request
   delay(2000); 
   printSerialData();

}

void sendData(){
   
  Serial1.println("AT+HTTPPARA=\"CID\",1");
  delay(3000);
  printSerialData();
 
  Serial1.print("AT+HTTPPARA=\"URL\",\"http://awsimd.000webhostapp.com/gprs.php?s=");
  // delay(500);
  printSerialData();
  Serial1.print(stationID);
  //delay(500);
  printSerialData();
  Serial1.print("&t=");
  //delay(500);
  printSerialData();
  Serial1.print(oneTemperature);
  //delay(500);
  printSerialData();
  Serial1.print("&h=");
  //delay(500);
  printSerialData();
  Serial1.print(oneHumidity);
  //delay(500);
  printSerialData();
  Serial1.print("&p=");
  //delay(500);
  printSerialData();
  Serial1.print(onePressure);
  //delay(500);
  printSerialData();
  Serial1.print("&ws=");
  //delay(500);
  printSerialData();
  Serial1.print(oneSpeed);
  //delay(500);
  printSerialData();
  Serial1.print("&wd=");
  //delay(500);
  printSerialData();
  Serial1.print(oneDirection);
  //delay(500);
  printSerialData();
  Serial1.println("\"");
  delay(1000);
  printSerialData();

 
  Serial1.println("AT+HTTPACTION=1\r\n");
  delay(3000);
  printSerialData(); 

  delay(10000);
  Serial1.flush();
}


void printSerialData()
{
 while(Serial1.available()!=0)
 Serial.write(Serial1.read());
}


/*void sendpressure()
{ Serial1.println("AT+CIPSEND");
  delay(200);
  printSerialData();
  
  Serial.print("Pressure = ");
  Serial.print(onePressure);
  Serial.print("hPa");
  Serial.println();
  delay(500);
 Serial1.println(onePressure);
 delay(300);
 printSerialData();
 Serial1.write(0x1A);
 delay(300);
   printSerialData();
}

void sendhumidity()
{ Serial1.println("AT+CIPSEND");
  delay(200);
  printSerialData();
  
  Serial.print("Humidity = ");
  Serial.print(oneHumidity);
  Serial.print("%");
  Serial.println();
  delay(500);
 Serial1.println(oneHumidity);
 delay(300);
 printSerialData();
 Serial1.write(0x1A);
 delay(300);
   printSerialData();
}

void sendnorth()
{ Serial1.println("AT+CIPSEND");
  delay(200);
  printSerialData();
  
  Serial.print("North Component = ");
  Serial.print(oneNorthComp);
  Serial.println();
  delay(500);
 Serial1.println(oneNorthComp);
 delay(300);
 printSerialData();
 Serial1.write(0x1A);
 delay(300);
   printSerialData();
}

void sendeast()
{ Serial1.println("AT+CIPSEND");
  delay(200);
  printSerialData();
  
  Serial.print("East Component = ");
  Serial.print(oneEastComp);
  Serial.println();
  delay(500);
 Serial1.println(oneEastComp);
 delay(300);
 printSerialData();
 Serial1.write(0x1A);
 delay(300);
   printSerialData();
}*/
