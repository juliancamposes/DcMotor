/* DcMotor.cc- Library for control of dc motors.
Created by Loleando.com , December 21, 2012
www.loleando.com
Released for personal project
*/

/* DcMotor.cc- Libreria para el control de un motor DC.
Creada por J. Campos para Loleando.com , 21 Diciembre, 2012
www.loleando.com
Desarrollada para proyecto personal
*/

En el siguiente documento explicaremos el funcionamiento de la librería:

Lo primero que veremos es la creación del objeto motor:

(En el ejemplo se llama motor1 el objeto, puede tener cualquier nombre)

DcMotor motor1(pinPWM, Pin1, Pin2) [poner los números de los pines]

El pinPWM sirve para controlar la velocidad del motor, es de carácter obligado declarar un pin PWM ya que esta librería está creada para trabajar con velocidades.

Si no deseara trabajar la velocidad, tan solo tendría que poner cualquier pin (vale uno mismo del motor) que de 5V para trabajar en velocidad máxima.

El pin PWM debe estar conectado al pin enable de nuestro circuito.

RECORDAD es una librería diseñada para trabajar con velocidad, así que es obligado

Pin1 y pin2 será los pines donde esté conectado el motor.

Las funciones son las siguientes:

motor1.avance(velocidad); Donde la velocidad es un valor int desde 0 a 255. Con esta función el motor se moverá en una dirección.

motor1.parar(); el motor se parará, no hay que poner velocidad entre los paréntesis.

motor1.retroceso(velocidad); el motor irá al sentido contrario del de avanzar, es necesario poner la velocidad.


Esta es la guía simple de la librería DcMotor. Recuerden, es de carácter obligado poner un pin PWM, o en su caso poner un pin que esté en OUTPUT y de 5V.


Espero que haya sido de ayuda.

Saludos.
