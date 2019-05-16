void brazini(){
  servo4.write(0);
  servo3.write(0);
  delay(2000);
  servo4.write(90);
  servo3.write(90);
  delay(2000);
  servo2.write(30);
  servo1.write(60);
  delay(2000);
  servo2.write(90);
  servo1.write(0);
  delay(2000);
  servo2.write(30);
  servo1.write(60);
  delay(1000);
  servo2.write(0);
  servo1.write(90);
  delay(5000);
  }

  void manini(){
  servo4.write(0);
  servo3.write(0);
  delay(500);
  servo4.write(90);
  servo3.write(90);
  delay(2000);
  }

  void posa(){
  servo2.write(80);
  servo1.write(10);
  }

  void posabajo(){
    servo2.write(0);
    servo1.write(90);
    }
    /*void velLenta(){
     for(pos = 0; pos > 180; pos +=2)
     {
      servo4.write(pos);
     delay(100);
     }
  }
  void velMedia(){
     for(pos = 0; pos > 180; pos +=2)
     {
      servo4.write(pos);
     delay(50);
     }
  }
  void velRapida(){
     for(pos = 0; pos > 180; pos +=2)
     {
      servo4.write(pos);
     delay(25);
     }
  }
*/
