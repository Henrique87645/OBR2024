
//INCLUINDO BIBLIOTECAS 

#include <Ultrasonic.h>
#include <AFMotor.h>

//PINOS IR 
int sIR[] = {50, 49, 53, 51, 52};


int setpoint = 1024;  
/*Posições do Vetor:

    [0] = Direita 
    [1] = Esquerda 
    [2] = Centro  
    [3] = ExtremoEsquerda 
    [4] = ExtremoDireita 
*/

const int Centro = A13;
const int CurvaEsquerda = 20;
const int CurvaDireita = 15;
const int VerdeEsquerda = 19;
const int SLEsquerda = 18;
const int SLDireita = 17;
const int VerdeDireita = 16;

//PINOS LDR
const int LDRdir = A14;
const int LDResq = A15;
int ValIlu = 500;

//PINO LDR CONVERTIDO
int sLDR[] = {0, 0};    


//PINOS MOTOR 
AF_DCMotor motor2(1); //Seleção do Motor 1
AF_DCMotor motor4(4); //Seleção do Motor 2

// Pino digital conectado ao sensor HSRO4
//Ultrasonic ultrasonic(37, 39); //Frente Baixo

void setup() {
//DECLARANDO O SENSOR IR COMO INPUT
for (int i = 0; i <= 3; i++) { pinMode(sIR[i], INPUT);}

//PINOS LAD PORTA ANALOGICA
pinMode(A7, OUTPUT); //CentroLDR
pinMode(A8, OUTPUT); //90Esquerda
pinMode(A9, OUTPUT); //VerdeEsquerda
pinMode(A10, OUTPUT); //SLEsquerda
pinMode(A11, OUTPUT); //SLDireita
pinMode(A12, OUTPUT); //VerdeDireita 
pinMode(A13, OUTPUT); //90Direita  
 
//DECLARANDO O SENSOR VERDE COMO OUTPUT
/*  for (int i = 0; i <= 4; i++) {
    pinMode(vDIR[i], OUTPUT);
//DECLARANDO O OUT DO SENSOR VERDE COMO INPUT
    pinMode(LDRdir[14], INPUT);   // Set Sensor Verde
    pinMode(LDResq[15], INPUT);  // Set Sensor Verde
    }
*/

Serial.begin(9600);// Setup Serial Monitor
digitalWrite(Centro, HIGH);
  delay(1000);
} 
void loop(){
  
  //Curva90();
  //SegueLinha();
  LDR();
}

