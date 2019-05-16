float ultrasonico() {
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH); //activar trigger
  delayMicroseconds(10); // Wait for 10 microsecond(s)
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = 0.0343 * tiempo / 2;

  if (distancia > 100) {
    distancia = 100000;
  }

  digitalWrite(trig2, LOW);
  digitalWrite(trig2, HIGH); //activar trigger
  delayMicroseconds(10); // Wait for 10 microsecond(s)
  digitalWrite(trig2, LOW);
  tiempo2 = pulseIn(echo2, HIGH);
  distancia2 = 0.0343 * tiempo2 / 2;

  if (distancia2 > 100) {
    distancia2 = 100000;
  }

  float dist;
  if (distancia < distancia2) {
    dist = distancia;
  }
  else {
    dist = distancia2;
  }
  return dist;
}
