//CURVA DE 90

  /*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 
*/

void Curva90(){

  if (digitalRead(sIR[3]) == 1) { 
          robot_forward(120);
          delay(200);
        while (digitalRead(sIR[1]) == 1) {         
          robot_left(220);
          delay(10);

        }
    }

    if(digitalRead(sIR[4]) == 1) {
          robot_forward(120);
          delay(200);
      while (digitalRead(sIR[0]) == 1) {

        
        robot_right(220);
        delay(10);

      }
    }
}

//TESTE COM COMPARAÇÃO DUPLA

    /*else if (digitalRead(sIR[3, 1]) == 1) { 
          robot_forward(255);
          delay(100);
        while (digitalRead(sIR[1]) == 0) {

          Serial.println("Esq90");
          robot_left(220);
          delay(35);

        }
    }

    if(digitalRead(sIR[4, 0]) == 1) {
          robot_forward(255);
          delay(100);
      while (digitalRead(sIR[0]) == 0) {

        Serial.println("Dir90");
        robot_right(220);
        delay(35);

      }
    }
}
*/
