
  /*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 
*/
//ATENÇÃO 0 = LIGADO E 1 = DESLIGADO 

void Curva90(){
  //SE O SENSOR DA ExtremoEsquerda ESTIVER DESLIGADO
  if (digitalRead(sIR[3]) == 1) { 
          robot_forward(120);
          delay(300);
          robot_stop(0);
          //Enquanto seu valor estiver desligado, ele gira para a esquerda
        while (digitalRead(sIR[0]) != 1) { 
          digitalWrite(A8, 200);        
          robot_left(230);
          delay(10);

        }
    }
  //SE O SENSOR DA ExtremoDireita ESTIVER DESLIGADO
    if(digitalRead(sIR[4]) == 1) {
          robot_forward(120);
          delay(300);
          robot_stop(0);
           //Enquanto seu valor estiver desligado, ele gira para a direita
      while (digitalRead(sIR[1]) != 1) {
        digitalWrite(A13, 200);
        robot_right(230);
        delay(10);

      }
    }
}
