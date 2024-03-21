//FONTE DA PROG

//INCLUINDO BIBLIOTECAS 

#include <Ultrasonic.h>
#include <AFMotor.h>

//PINOS IR 

const int LDRdir = A8;
const int LDResq = A9;
int sIR[] = {50, 51, 52, 53, 48};	
int sensorValue = 0;  
int sensorValue1 = 0;  
int setpoint = 1024;   


/*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 
*/
  
// Pino digital conectado ao sensor HSRO4
Ultrasonic ultrasonic(37, 39); //Frente Baixo
AF_DCMotor motor2(2); //Seleção do Motor 1
AF_DCMotor motor4(3); //Seleção do Motor 2


void setup() {

  //DECLARANDO O SENSOR VERDE COMO OUTPUT
  //for (int i = 0; i <= 4; i++) {

    pinMode(22, OUTPUT);
    //pinMode(vDIR[i], OUTPUT);

  //}

  //DECLARANDO O OUT DO SENSOR VERDE COMO INPUT
  //pinMode(vESQ[4], INPUT);   // Set Sensor Verde
 // pinMode(vDIR[4], INPUT);  // Set Sensor Verde

  //DECLARANDO O SENSOR IR COMO INPUT
  for (int i = 0; i <= 3; i++) { pinMode(sIR[i], INPUT);}

  // Set Frequency scaling to 20%
  //digitalWrite(vDIR[0], HIGH);
  //digitalWrite(vDIR[1], LOW);
  //digitalWrite(vDIR[2], HIGH);
  //digitalWrite(vDIR[3], LOW);
  
  Serial.begin(9600);// Setup Serial Monitor

} 
void loop(){
  //digitalWrite(22, HIGH);
  Curva90();
  //SegueLinha();
  // LDR();
  
}
