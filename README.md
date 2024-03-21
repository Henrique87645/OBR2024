//SEGUE LINHA

/*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 

*/

void SegueLinha()
{   

  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA

    //SE O SENSOR DA ESQUERDA ESTIVER DESLIGADO
    if (digitalRead(sIR[1]) == 1) { 

      //Enquanto seu valor estiver desligado, ele gira para a esquerda
        while (digitalRead(sIR[1]) != 0) {

          Serial.println("Esq");
          robot_left(200);
          delay(15);

        }
    }

    //SE O SENSOR DA DIREITA ESTIVER DESLIGADO
     if (digitalRead(sIR[0]) == 1) {

      //Enquanto seu valor estiver desligado, ele gira para a direita
      while (digitalRead(sIR[0]) != 0) {

        Serial.println("Dir");
        robot_right(200);
        delay(15);

      }
    }

    // EM CASO DO ROBÔ ESTAR PERFEITAMENTE ALINHADO, OU NO BRANCO
    else{ 

        robot_forward(130);
        delay(15);

    }
}
