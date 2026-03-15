#include <Servo.h>
#include <SoftwareSerial.h>

Servo gate;

SoftwareSerial BT(10,11);

int sensor = 8;
int relay = 7;

bool autoMode = true;

void setup()
{
  pinMode(sensor, INPUT);
  pinMode(relay, OUTPUT);

  gate.attach(9);
  gate.write(0);   

  digitalWrite(relay, HIGH); 

  BT.begin(9600);
}

void loop()
{

  // Bluetooth control
  if(BT.available())
  {
    char data = BT.read();

    if(data=='A') autoMode = true;   
    if(data=='M') autoMode = false;  

    if(!autoMode)
    {
      if(data=='1')
      {
        digitalWrite(relay, LOW);  
        gate.write(90);             
      }

      if(data=='0')
      {
        digitalWrite(relay, HIGH);  
        gate.write(0);              
      }
    }
  }

  // Automatic IR mode
  if(autoMode)
  {
    int motion = digitalRead(sensor);

    if(motion == LOW)
    {
      digitalWrite(relay, LOW); 
      gate.write(90);          
    }
    else
    {
      digitalWrite(relay, HIGH); 
      gate.write(0);             
    }
  }

}