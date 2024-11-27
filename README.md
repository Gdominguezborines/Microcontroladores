Ejercicios microcontroladores 
Esp 32 modelo SparkFun Pro Micro C3 
Campus Dual Tic  IMATIA

Crear un repositorio ejercicios_microcontroladores en vuestra cuenta de github. En
cada repositorio debe haber una carpeta por cada uno de los siguientes ejercicios con
el nombre indicado. Hacer un commit por cada ejercicio.

1. hello_world

    a. Imprimir Hello world continuamente por el monitor serie.

3. delay

    a. Incrementar un contador e imprimirlo por el monitor serie cada segundo.
    b. Usar delay.

4. delay_2

    a. El contador ctr1 se incrementará 10 veces por segundo
    b. El contador ctr2 se incrementará 1 vez cada 2 segundos.
    c. Cuando se incremente ctr2 se descontará el valor de dicho contador de ctr1.
    d. Cada vez que uno de los dos contadores se incremente se imprimirá con
          el formato C1: {valor del contador 1} C2: {valor del contador 2}.
    e. Usar la función delay.

5. millis

    a. Repetir el ejercicio 2 usando la función millis().

6. micros

   a. Repetir el ejercicio 3 usando la función micros().

7. echo

    a. Recibir datos por la conexión serial.
    b. Reenviar por dicha conexión los datos recibidos cambiando las
        mayúsculas por minúsculas y las minúsculas por mayúsculas.

8. Hacer una aplicación de línea de comandos mediante el puerto serie delmicrocontrolador.
  
    a. Al iniciar o enviar una h se debe mostrar el menu de ayuda con la
        siguiente información:
      H o h (help): muestra este menu de ayuda.
      START o start: publica cada segundo un valor por el puerto serie
      STOP o stop: detiene la publicación del valor.
      T o t (time): El siguiente valor enviado cambiará el periodo de
      publicación de la señal entre 1 y 10 veces por segundo.
      M o m (mode): cambia el modo de fijo a alternativo. En modo fijo la
      señal se emite mantiene siempre el mismo valor siendo el ultimo
      emitido, por defecto debe ser un 1. Por otra parte, en modo
      alternativo cada vez que se publica el valor se alterna entre 0 y 1.
