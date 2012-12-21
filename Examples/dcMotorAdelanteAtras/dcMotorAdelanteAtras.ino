#include <DcMotor.h>

DcMotor motor1(3, 8, 9); // creamos el objeto motor1. El pin 3 es el pin PWM y debe estar conectado al pin enable, el pin 8 es un pin conectado al motor y el pin 9 es otro conectado al motor
                         
  int velocidadAvance = 200; //definimos variables con las velocidades
  int velocidadAtras = 80; //la velocidad la tenemos que definir en el rango del PWM, es decir, entre 0 y 255, siendo 0 -> 0V y 255 -> 5V continuos.       

void setup () {
                          
   
}

void loop(){
   motor1.avanzar(velocidadAvance);   // llamamos a la funcion avanzar a una velocidad de 200
   delay(5000);           //esperamos 5 segundos mientras se mueve el motor
   motor1.atras(velocidadAtras);      //llamamos a la funcion atras a una velocidad de 80
   delay(5000);           //esperamos 5 segundos mientras se mueve hacia atras
   motor1.parar();        //llamamos a la funcion parar para detener el motor
   delay(3000);           //lo detenemos durante 3 segundos
   

}
