void adelante(int vel, int vel2){
  analogWrite(ena, vel);
  analogWrite(enb, vel2);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(ledrojo,LOW);
  digitalWrite(ledazul,HIGH);
  digitalWrite(ledamarillo,LOW);
    }

void derecha(int vel, int vel2){
    analogWrite(ena, vel);
    analogWrite(enb, vel2);
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW); 
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledazul,LOW);
    digitalWrite(ledamarillo,HIGH);
    }

 void atras(int vel, int vel2){
  analogWrite(ena, vel);
  analogWrite(enb, vel2);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(ledrojo,HIGH);
  digitalWrite(ledazul,LOW);
  digitalWrite(ledamarillo,LOW);
    }

void izquierda(int vel, int vel2){
    analogWrite(ena, vel);
    analogWrite(enb, vel2);
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH); 
    }
void parar(){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW); 
    }

void esquivar(){
  if (distancia > 100) {
    distancia = 0;
 }
    derecha(200,200);
   if (distancia > 30){
    adelante(250,250);
    }
    if(distancia > 0 && distancia < 10){
      atras(100,100);
     // derecha(100,100);
      }
      }

 void cesargei(){
   derecha(200,200);
   if(distancia < 50 && distancia > 1);
   adelante(200,200);
   if(distancia > 15 && distancia < 20);
   parar();
   }

void ultrasonico(){
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH); //activar trigger
  delayMicroseconds(10); // Wait for 10 microsecond(s)
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = 0.0343 * tiempo / 2;
}
