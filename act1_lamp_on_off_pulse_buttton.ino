/*
Descrição: neste programa fazemos o arduino ligar/desligar uma lampada atraves de um botao de puslo


Description: In this program we make the arduino turn on/turn off a lamp using a pulse button
Author: @lcs_valadao

*/

int estado_lamp=0;

void setup() {
      pinMode(6,OUTPUT);
      Serial.begin(9600);
}
void loop() {
      if (analogRead(0) > 1000){
          estado_lamp = !estado_lamp;
          digitalWrite(6,estado_lamp);
      }
      delay(180);
}
