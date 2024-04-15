
/*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 

*/

//ATENÇÃO 0 = LIGADO E 1 = DESLIGADO 
void SegueLinha()
{   
  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
  //Curva90();
    //SE O SENSOR DA ESQUERDA ESTIVER DESLIGADO
    if (digitalRead(sIR[1]) == 1) {
      //Enquanto seu valor estiver desligado, ele gira para a esquerda
        while (digitalRead(sIR[1]) == 1) {
          analogWrite(A10, 200);
          Serial.println("Esq");
          robot_left(230);
          delay(1);

        }
        analogWrite(A10, 0);
    }

    //SE O SENSOR DA DIREITA ESTIVER DESLIGADO
      if (digitalRead(sIR[0]) == 1) {
       analogWrite(A11, 200);

      //Enquanto seu valor estiver desligado, ele gira para a direita
      while (digitalRead(sIR[0]) == 1) {
        
        Serial.println("Dir");
        robot_right(230);
        delay(1);

      }
      analogWrite(A11, 0);
    }

 // EM CASO DO ROBÔ ESTAR PERFEITAMENTE ALINHADO, OU NO BRANCO
    else{ 
      robot_forward(255);
      delay(1);
    }
}
