#include <Servo.h>
//Servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
//int pos;
  //Puente H
  int in1 = 22;
  int in2 = 23;
  int ena = 24;//velocidad
  int in3 = 25;
  int in4 = 26;
  int enb = 27;//velocidad
  //Ultrasonicos
  int trig = 30;
  int echo = 31;
  int trig2 = 32;
  int echo2 = 33;
  float tiempo;
  float distancia;
  float tiempo2;
  float distancia2;
  //LEDS
  int ledrojo = 46;
  int ledamarillo = 47;
  int ledazul = 48;
  int ledverde = 49;

void setup() {
  
  delay(3000);
  Serial.begin(9600);
  //Servos
  servo1.attach(9);//izquierda
  servo2.attach(10);//derecha
  servo3.attach(11);//izquierda muñeca
  servo4.attach(8 );//derecha muñeca
  //Puente H
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT); 
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  //Ultrasonicos
  pinMode(trig, OUTPUT);//el trigger es salida
  pinMode(echo, INPUT);//el echo es entrada
  pinMode(trig2, OUTPUT);//el trigger es salida
  pinMode(echo2, INPUT);//el echo es entrada
  //LEDS
  pinMode(ledrojo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledamarillo, OUTPUT);
  pinMode(ledverde, OUTPUT);

}

void loop() {
 
  ultrasonico();
  if(distancia < 50 && distancia > 1){
    adelante(255,255);
    digitalWrite(ledazul,HIGH);
    digitalWrite(ledamarillo,LOW);
    digitalWrite(ledverde,LOW);
    digitalWrite(ledrojo,LOW);
    if(distancia < 30 && distancia > 1){
      parar();
    digitalWrite(ledazul,LOW);
    digitalWrite(ledamarillo,LOW);
    digitalWrite(ledverde,LOW);
    digitalWrite(ledrojo,HIGH);
      }
    }
  else{
    derecha(130,130);
    digitalWrite(ledamarillo,HIGH);
    digitalWrite(ledverde,LOW);
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledazul,LOW);
    }
  
      Serial.println(distancia);
      //Serial.println(distancia2);
}
