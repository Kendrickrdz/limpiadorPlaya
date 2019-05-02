int in1 = 8;
int in2 = 9;
int ena = 11;
int in3 = 3;
int in4 = 4;
int enb = 10;
int trig = 5;
int echo = 6;
float tiempo;
float distancia;
int ledrojo = 46;
int ledamarillo = 47;
int ledazul = 48;


void setup() {
  Serial.begin(9600);//monitor serial
 // entradas y salidas
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT); 
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(trig, OUTPUT);//el trigger es salida
  pinMode(echo, INPUT);//el echo es entrada
  pinMode(ledrojo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledamarillo, OUTPUT);
}

void loop() {
  
  ultrasonico();
  esquivar();

   
      Serial.println(distancia);
}
