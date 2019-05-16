void adelante(int vel, int vel2){
  analogWrite(ena, vel);
  analogWrite(enb, vel2);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  //delay(t);
  //digitalWrite(ledazul,HIGH);
    }

void derecha(int vel, int vel2){
    analogWrite(ena, vel);
    analogWrite(enb, vel2);
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW); 
    
   // digitalWrite(ledamarillo,HIGH);
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

void izquierda(int vel, int vel2, int t){
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
