// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#include <Servo.h>
// Go to the Project Settings (nut icon).
char auth[] = "9jgbLkBgbC4DPUDA4lZW3dlA0D32Y7ig";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OnePlus 9R";
char pass[] = "Priyam@01";
Servo myservo1; 
Servo myservo2; 
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

void setup()
{
 
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
 pinMode(19,OUTPUT);
 pinMode(18,OUTPUT);
 pinMode(5 ,OUTPUT);
 pinMode(17,OUTPUT);
 
  myservo1.attach(27);
  myservo2.attach(14);
  myservo3.attach(25);
  myservo4.attach(32);
  myservo5.attach(33);
  myservo6.attach(12);
 myservo1.write(90);
 myservo2.write(90);
 myservo3.write(20);
 myservo4.write(90);
 myservo5.write(90);
 myservo6.write(40);
 //pinMode(D2,OUTPUT);
 
  Blynk.begin(auth, ssid, pass);
  delay(1000);
  Blynk.virtualWrite(V1,90);
  Blynk.virtualWrite(V2,90);
  Blynk.virtualWrite(V3,20);
  Blynk.virtualWrite(V4,90);
  Blynk.virtualWrite(V5,90);
  Blynk.virtualWrite(V6,40);
}

void loop()
{
                       // waits 15ms for the servo to reach the position
  Blynk.run();

} 

//Robotic arm starts
BLYNK_WRITE(V1)
{
  int pinValue1 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue1);
   myservo1.write(pinValue1);
}
BLYNK_WRITE(V2)
{
  int pinValue2 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue2);
   myservo2.write(pinValue2);
}
BLYNK_WRITE(V3)
{
  int pinValue3 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue3);
   myservo3.write(pinValue3);
}
BLYNK_WRITE(V4)
{
  int pinValue4 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue4);
   myservo4.write(pinValue4);
}
BLYNK_WRITE(V5)
{
  int pinValue5 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue5);
   myservo5.write(pinValue5);
}
BLYNK_WRITE(V6)
{
  int pinValue6 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue6);
   myservo6.write(pinValue6);
}

//Robot starts
BLYNK_WRITE(V7)
{
  int pinValue7 = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.println(pinValue7);

   if(pinValue7==HIGH)
   {
    digitalWrite(19,HIGH);
      digitalWrite(18,LOW);
        digitalWrite(5,HIGH);
          digitalWrite(17,LOW);
    
     Serial.println("Forward");
    
     }
     else
     {
      
       digitalWrite(19,LOW);
      digitalWrite(18,LOW);
        digitalWrite(5,LOW);
          digitalWrite(17,LOW);
    
     Serial.println("Stop");
    
      }
}
  
BLYNK_WRITE(V8)
{
  int pinValue8 = param.asInt(); // assigning incoming value from pin V2 to a variable
  Serial.println(pinValue8);
   if(pinValue8==HIGH)
   {
    digitalWrite(19,LOW);
      digitalWrite(18,HIGH);
        digitalWrite(5,LOW);
          digitalWrite(17,HIGH);
    
     Serial.println("Backward");
    
     }
     else
     {
      
       digitalWrite(19,LOW);
      digitalWrite(18,LOW);
        digitalWrite(5,LOW);
          digitalWrite(17,LOW);
    
     Serial.println("Stop");
    
      }
}
BLYNK_WRITE(V9)
{
  int pinValue9 = param.asInt(); // assigning incoming value from pin V3 to a variable
  Serial.println(pinValue9);
   if(pinValue9==HIGH)
   {
    digitalWrite(19,HIGH);
      digitalWrite(18,LOW);
        digitalWrite(5,LOW);
          digitalWrite(17,HIGH);
    
     Serial.println("Right");
    
     }
     else
     {
      
       digitalWrite(19,LOW);
      digitalWrite(18,LOW);
        digitalWrite(5,LOW);
          digitalWrite(17,LOW);
    
     Serial.println("Stop");
    
      }
}
BLYNK_WRITE(V0)
{
  int pinValue0 = param.asInt(); // assigning incoming value from pin V4 to a variable
  Serial.println(pinValue0);
   if(pinValue0==HIGH)
   {
    digitalWrite(19,LOW);
      digitalWrite(18,HIGH);
        digitalWrite(5,HIGH);
          digitalWrite(17,LOW);
    
     Serial.println("Left");
    
     }
     else
     {
      
    digitalWrite(19,LOW);
      digitalWrite(18,LOW);
        digitalWrite(5,LOW);
          digitalWrite(17,LOW);
    
     Serial.println("Stop");
    
      }
}
