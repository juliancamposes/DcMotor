#include <DcMotor.h>

int PinEnableMotor1 = 3;  //Pin utilizado para activar o desactivar el motor. Debe conectarse a una salida PWM.
int Pin1Motor1 = 8;  //Pin conectado a una de las patillas del motor 1 en el puente H.
int Pin2Motor1 = 9;  //Pin conectado a la segunda patilla del motor 1 en el puente H.


DcMotor motor1(PinEnableMotor1, Pin1Motor1, Pin2Motor1);  //Creamos el objeto motor1. 
                         
int velocidadAvance = 200; //definimos variables con las velocidades
int velocidadAtras = 80; //la velocidad la tenemos que definir en el rango del PWM, es decir, entre 0 y 255, siendo 0 -> 0V y 255 -> 5V continuos.       

void setup () {
                          
   
}

void loop(){

   motor1.avance(velocidadAvance);   // llamamos a la funcion avanzar a una velocidad de 200
   delay(5000);           //esperamos 5 segundos mientras se mueve el motor
   motor1.retroceso(velocidadAtras);      //llamamos a la funcion atras a una velocidad de 80
   delay(5000);           //esperamos 5 segundos mientras se mueve hacia atras
   motor1.parar();        //llamamos a la funcion parar para detener el motor
   delay(3000);           //lo detenemos durante 3 segundos

}
