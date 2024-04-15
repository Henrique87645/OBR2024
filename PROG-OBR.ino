
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

int PWM_A = 8;
int PWM_B = 9;



/*
int sensor0 = 33;
int sensor1 = 35;
int sensor2 = 37;
int sensor3 = 39;
int sensor4 = 41;
int sensor5 = 43;
int sensor6 = 45;
*/

/*
int slRead[7] = {33, 35, 37, 39, 41, 43, 45};


int sensor[7];

int vel_A = 200;
int vel_B = 255;




void setup() {

 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 
 pinMode (IN4, OUTPUT);
 pinMode (PWM_A, OUTPUT);
 pinMode (PWM_B, OUTPUT);

   for (int i = 0; i <= 7; i++){ pinMode (slRead[i], INPUT);}

   for (int i = 0; i <= 7; i++){  sensor[i] = slRead[i];}

 
}*/

       

 
void loop(){
  
  SegueLinha();
  
}


