#include <Wire.h>
#include <MAX30100.h>
#include <SHCSR04.h>

#define ldr 6
#define ref 7
#define  incl 8
#define infra 9
#define led 30
#define led2 31
#define led3 32
#define led4 33


MAX30100 pulsacao;
void setup() 
{
  pinMode(ldr,INPUT);
   pinMode(ref,INPUT);
   pinMode(incl,INPUT);
   pinMode(infra,INPUT);
   pinMode(led,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);
   Serial.begin(9600);
   Wire.begin();
   pulsacao.begin(pw1600,150,sr100);
}
// variaveis globais

bool sensor1,sensor2,sensor3,sensor4;
bool saida1,saida2,saida3,saida4;
int analogico1;
int analogico2;
float tensao1,percentual1;
float tensao2,percentual2;
SHCSR04 sensor5;
float ultrassonico;

void loop() 
{
  analogico1=analogRead(A0);
  analogico2=analogRead(A1);
  ultrassonico=sensor5.read(4,5);
  //Serial.print(" DISTANCIA ");
  //Serial.println(ultrassonico);
  pulsacao.readSensor();
  Serial.println(pulsacao.IR);
 // Serial.println (analogico1);
 //Serial.println (analogico2);
sensor1=digitalRead(ldr);//leitura do pino do ldr
//Serial.print(" Sensor1 ");
//Serial.println(sensor1);//monitorar sensor1
sensor2=digitalRead(ref);//leitura do pino do ref
//Serial.print(" Sensor2 ");
//Serial.println(sensor2);//monitorar sensor1

sensor3=digitalRead(infra);//leitura do pino do infra
//Serial.print(" Sensor3 ");
//Serial.println(sensor3);//monitorar sensor3
sensor4=digitalRead(incl);//leitura do pino do incl
//Serial.print(" Sensor4 ");
//Serial.println(sensor4);//monitorar sensor4

//conversão analogica

//tensao1=5*analogico1/1023; ou
tensao1 = 0.00488 * analogico1;
tensao2 = 0.00488 * analogico2;
//Serial.print("Nivel de Tensão:  ");
//Serial.println(tensao2);
percentual1 = (1 - analogico1 / 1023.0) * 100;
percentual2 = (1 - analogico2 / 1023.0) * 100;
//Serial.print("Percentual2:  ");
//Serial.println(percentual2);

if((sensor1||sensor2)&&(sensor3||sensor4))
{
saida1=1;
}
else
{
 saida1=0; 
}

if(sensor1||sensor2||sensor3||sensor4)
{
saida2=1;
}
else
{
 saida2=0; 
}




if(!(sensor1||sensor2)||(sensor3||sensor4))
{
saida3=1;
}
else
{
 saida3=0; 
}

if(sensor1&&sensor2&&sensor3&&sensor4)
{
saida4=1;
}
else
{
 saida4=0; 
}



digitalWrite(led,saida1);
digitalWrite(led2,saida2);
digitalWrite(led3,saida3);
digitalWrite(led4,saida4);
//Serial.print("Saída 1: "); 
//Serial.println(saida1);
}


  
