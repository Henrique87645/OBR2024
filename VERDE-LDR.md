//VERDE LDR
void LDR() {


  //0 = direita 1 = esquerda
  sLDR[0] = analogRead(LDRdir); // Faz a leitura do pino analógico
  sLDR[1] = analogRead(LDResq); // Faz a leitura do pino analógico

  Serial.println(sLDR[0]);
  Serial.println(sLDR[1]);

  
  if( sLDR[1] > ValIlu ){
       delay(1000);
    if(sLDR[0] > ValIlu ){
  digitalWrite(A8, HIGH);
  digitalWrite(A11, HIGH);
   Serial.print("Retorno");
   delay(100);

     /* while (digitalRead(sIR[3]) != 0) {
       DigitalWrite(16, HIGH);
        robot_left(200);
        delay(15);

      }*/
       digitalWrite(A8, LOW);
       digitalWrite(A11, LOW);
  }
    else{
  digitalWrite(A8, HIGH);
   Serial.print("Direita");
   delay(100);

     /* while (digitalRead(sIR[3]) != 0) {
       DigitalWrite(16, HIGH);
        robot_left(200);
        delay(15);

      }*/
       digitalWrite(A8, LOW);
    }  
  }

  if( sLDR[0] > ValIlu ){
    delay(1000);
    if(sLDR[1] > ValIlu){
  digitalWrite(A8, HIGH);
  digitalWrite(A11, HIGH);
   Serial.print("Retorno");
   delay(100);

     /* while (digitalRead(sIR[3]) != 0) {
       DigitalWrite(16, HIGH);
        robot_left(200);
        delay(15);

      }*/
       digitalWrite(A8, LOW);
       digitalWrite(A11, LOW);
  }
  else{
    digitalWrite(A11, HIGH);
    Serial.print("Esquerda");
    delay(100);

      /*while (digitalRead(sIR[4]) != 0) {
       
        robot_right(200);
        delay(15);
      }
      */
       digitalWrite(A11, LOW);
  }
  }
}
