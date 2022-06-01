#include <Keypad.h>

byte filas = 4;//cantidad de filas
byte columnas= 4; //cantidad de columnas
char teclas[filas][columnas] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte filaspines[filas] = {5, 4, 3, 2}; 
byte colulmnaspines[columnas] = {8, 7, 6}; 

Keypad teclado = Keypad( makeKeymap(teclas), filaspines, columnaspines, filas, columnas );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char tecla = teclado.getKey();
  
  if (tecla){
    Serial.println(tecla);
  }
}
