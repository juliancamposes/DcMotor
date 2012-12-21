/* DcMotor.cpp- Library for control of dc motor.
Created by J.Campos for Loleando.com, December 21, 2012
www.loleando.com
Released for personal project
*/

/* DcMotor.cpp- Libreria para el control de un motor DC.
Creada por J.Campos para Loleando.com, 21 Diciembre de 2012
www.loleando.com
Desarrollada para proyecto personal
*/

#include "DcMotor.h"
#include "Arduino.h"

DcMotor::DcMotor (int pinVelocidad, int pin1, int pin2) { //usamos 3 pines, el pin enable del driver para la velocidad, y los 2 de los motores

	_pin1 = pin1;
	_pin2 = pin2;	
	_pinVelocidad = pinVelocidad; //Pin de PWM usado

	pinMode(_pin1, OUTPUT); //ponemos los pines del motor como OUTPUT
	pinMode(_pin2, OUTPUT);
	pinMode(_pinVelocidad, OUTPUT); //tambien ponemos el pin de PWM como OUTPUT, si no usamos el PWM será o 5V o 0V

	}

void DcMotor::avanzar(int velocidad) {

	digitalWrite(_pin1, HIGH); //Al avanzar usamos logica 1-0, donde
	digitalWrite(_pin2, LOW);
	analogWrite(_pinVelocidad, velocidad); //la velocidad va de 0 a 255 (0-> OV, 255->5V)
						 //y se manda al pin enable del driver

	}

void DcMotor::parar() {

	digitalWrite(_pin1, LOW); //Para parar dejamos de mandar señal usando
	digitalWrite(_pin2, LOW); //la logica 00


	}

void DcMotor::atras(int velocidad) {

	digitalWrite(_pin1, LOW); //para ir al sentido contrario cambiamos la polaridad
	digitalWrite(_pin2, HIGH); //siendo 0-1
	analogWrite(_pinVelocidad, velocidad); //y se manda al pin enable del driver

	}