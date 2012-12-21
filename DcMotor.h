/* DcMotor.h- Library for control of dc motor.
Created by J.Campos for Loleando.com, December 21, 2012
www.loleando.com
Released for personal project
*/

/* DcMotor.h- Libreria para el control de un motor DC.
Creada por J.Campos para Loleando.com, 21 Diciembre de 2012
www.loleando.com
Desarrollada para proyecto personal
*/

#ifndef DcMotor_h
#define DcMotor_h
#include "Arduino.h"


class DcMotor {  //creamos las variables de la clase
public:
DcMotor(int pinVelocidad, int pin1, int pin2);
void avance(int velocidad);
void retroceso(int velocidad);
void parar();
private:
int _pin1;
int _pin2;
int velocidad;
int _pinVelocidad;

};

#endif
