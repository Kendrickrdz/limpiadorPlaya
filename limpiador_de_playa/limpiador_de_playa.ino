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
float d;
//LEDS
int ledrojo = 46;
int ledamarillo = 47;
int ledazul = 48;
int ledverde = 49;
boolean ultra1_1;
boolean ultra1_2;
boolean ultra2_1;
boolean ultra2_2;
int prom;
int ciclos = 0;

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
  /*ultra1_1 = distancia < 50 && distancia > 1;
    ultra1_2 = distancia < 30 && distancia > 1;
    ultra2_1 = distancia2 < 50 && distancia2 > 1;
    ultra2_2 = distancia2 < 30 && distancia2 > 1;
  */
  d = ultrasonico();
  if (d > 0 && d < 30) {
    parar();
    digitalWrite(ledazul, LOW);
    digitalWrite(ledamarillo, LOW);
    digitalWrite(ledverde, LOW);
    digitalWrite(ledrojo, HIGH);
  }
  else if (d < 50) {
    adelante(255, 255);
    digitalWrite(ledazul, HIGH);
    digitalWrite(ledamarillo, LOW);
    digitalWrite(ledverde, LOW);
    digitalWrite(ledrojo, LOW);
  }
  else {
    if (ciclos < 50) {
      derecha(130, 130);
      delay(100);
      parar();
      delay(100);
      digitalWrite(ledamarillo, HIGH);
      digitalWrite(ledverde, LOW);
      digitalWrite(ledrojo, LOW);
      digitalWrite(ledazul, LOW);
      ciclos++;
    }else{
      ciclos = 0;
      adelante(255,255);
      delay(1000);
    }
  }
  Serial.println(d);
}
