
int soundSensor=6;              //Declare pin soundsensor
int LED=4;                     // Declare pin LED
boolean LEDStatus=false;      //LED dalam condition FALSE atau LOW

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
 Serial.begin(9600);

}

void loop() {

  int SensorData=digitalRead(soundSensor); 
  if(SensorData==0){
    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
        Serial.println("LED menyala..");
        Serial.println();
        delay(100);
      
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
        Serial.println("LED tidak menyala..");
        Serial.println();
        delay(100);
    }
  }
 } 
