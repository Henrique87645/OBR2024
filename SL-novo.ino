
#include <AFMotor.h>

AF_DCMotor motor1(1); //Seleção do Motor 1
AF_DCMotor motor2(2); //Seleção do Motor 2

int slRead[7] = {33, 35, 37, 39, 41, 43, 45};//segue linha leitura

int sensor[7];//variavel que absor as leituras dos ir

int erro = 0; // erro
int v = 180; //velocidade



void setup() {

   for (int i = 0; i <= 7; i++){ pinMode (slRead[i], INPUT);}

   //o vetor sensor absorve os valores dos sensores ir
   for (int i = 0; i <= 7; i++){  sensor[i] = digitalRead(slRead[i]);}
 
}

void SegueLinha() {

  if(Erro() == -2){

      motor1.setSpeed(v*0.8999);
    
    
  }

  else if( Erro() == 2){

    motor2.setSpeed(v*0.8999);

  }

  else if(Erro() == -3){

    motor1.setSpeed(v*0.4999);

  }

  else if(Erro() == 3){
    motor2.setSpeed(v*0.4999);
  }

  else{
    motor1.setSpeed(v);
    motor2.setSpeed(v);
  }

}

/*posição[0]  == direita 90
  posicçao[1] == direito
  posição[2] == direita centro
  posiçao [3] == centro
  posição [4] == esquerda centro
  posição [5] == esquerda
  posição [6] == esquerda 90
  */

  //
  int Erro(){

    if(sensor[2] == 1 && sensor[3] == 1){ erro = -2;} //direita
    if(sensor[4] == 1 && sensor[3] == 1){ erro = 2;} //esquerda
    if(sensor[6] == 1 && sensor[5] == 0){ erro = 3;} //esquerda 90
    if(sensor[0] == 1 && sensor[1] == 0){ erro = -3;} //direita 90

  return erro;

}