//This code is to use with HC-SR04 ultrasound module, 
//it measures the distance and display it on the LCD i2c monitor in cm
//refer to www.surtrtech.com for more information

#include <LiquidCrystal_I2C.h> //LCD i2c library


#define I2C_ADDR 0x3F 
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin); // from this and above are LCD i2c stuff

const int trigPin = 9;  //pins of the module and where they are wired
const int echoPin = 10;

long duration;  //variables nedeed for measuring
float distanceCm;

void setup() {
  
           lcd.begin(16,2); 
           lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
           lcd.setBacklight(HIGH);
           pinMode(trigPin, OUTPUT);
           pinMode(echoPin, INPUT);
}

void loop() {
          lcd.clear(); //I add this fucntion so solve that problem of "cmcm"
          digitalWrite(trigPin, LOW); //setting the trigger pin on low
          delayMicroseconds(2);       //delay is usually in miliseconds but here we are on µs
          digitalWrite(trigPin, HIGH);//emitting the ultrasounds
          delayMicroseconds(10);      //duration of emission
          digitalWrite(trigPin, LOW); //turning off the emitter

          duration = pulseIn(echoPin, HIGH); //measuring the duration pulseIn function measure the time between the echopin getting on high and the getting on low
         
          distanceCm= duration*0.034/2;
          
          lcd.setCursor(0,0); 
          lcd.print("Target Distance: "); 
          lcd.setCursor(0,1);
          lcd.print(distanceCm); 
          lcd.print(" cm");
          
          delay(1000);
}
