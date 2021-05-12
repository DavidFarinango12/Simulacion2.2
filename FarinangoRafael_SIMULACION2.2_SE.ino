/*CAPITULO II: PUERTOS DIGITALES
 *CODIGO 2: MANEJO DE CICLOS DE PROGRAMACION CON PUERTOS DE SALIDA
 *OBJETIVO: USOS DE CICLOS WHILE, IF, FOR
 *NOMBRE: FARINANGO RAFAEL
 */

const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

int i=0;
int j=0;
int k;
 
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  //ciclo if, el led1 se prende y apaga 10 veces
  if(i<10){
      digitalWrite(led1,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      delay(500);
      i++;
    }

  //ciclo while, el led2 se enciende y apaga 10 veces
  while(j<=10){
      j++;
      digitalWrite(led2,HIGH);
      delay(500);
      digitalWrite(led2,LOW);
      delay(500);
    }

  //ciclo for, el led3 se enciende y apaga 11 veces
  for(k=0;k<=10;k++){
      digitalWrite(led3,HIGH);
      delay(500);
      digitalWrite(led3,LOW);
      delay(500); 
    }




}
