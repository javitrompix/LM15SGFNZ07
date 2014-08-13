LM15SGFNZ07 library
-------------- 

Librería para el control del LCD LM15SGFNZ07 incluido en los telefonos Siemens M55, S55, A60, C60, MC60.
El lcd esta fabricado por Samsung con el Driver HM17CM4096.
Tiene una resolución de 101x80 y 4096 colores. 

Esta libreria a sido desarrollada por:

Email: markauskas.mindaugas at gmail.com
URL: http://mindogas.wordpress.com/

La librería original:
https://bitbucket.org/mindogas/lm15sgfnz07

En los siguientes enlaces teneis más documentación de ella:

http://mindogas.wordpress.com/2012/06/27/siemens-m55-lcd-lm15sgfnz07-arduino-biblioteka/#more-235
https://bitbucket.org/mindogas/lm15sgfnz07

Aqui un video demostrativo:
http://www.youtube.com/watch?v=inPPhb31GNo

A library for interacting an arduino with a Siemens M55 LCD (LM15SGFNZ07)

Includes:
- Clearing LCD with base color;
- Contrast changing (not brightness);
- Pixels painting;
- Line painting;
- Area painting;
- Frame painting;
- Charapter printing in 4 font sizes;
- String printing in 4 font sizes; Auto wraping string;
- Predefined 11 colors (WHITE, BLACK, RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, BROWN, ORANGE, PINK) 

See: LCD description and library for AVR - http://www.drzasiek.cba.pl/m55.php


USAGE NOTES
-----------

Just put the files on a LM15SGFNZ07 directory under "arduino/libraries" on your instalation


PROJECT HOME
------------

URL: http://mindogas.wordpress.com/


APORTACIÓN PERSONAL
-------------------

Soporte para la libreria SPI y así tener más velocidad.
Modificado el ejemplo original y añadido otro para Arduino Mega.


DESCRIPCIÓN DE PINES
--------------------

Pin1  Cs
Pin2  Reset
Pin3  Rs
Pin4  Sclk
Pin5  Sdta
Pin6  +2.9V   (SE PUEDE USAR TRANQUILAMENTE 3,3V)
Pin7  Gnd
Pin8  Led1 +
Pin9  Led1+Led2 GND
Pin10 Led2 + 