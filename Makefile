mensaje: mensaje.o salida.o
gcc -o mensaje mensaje.o salida.o

mensaje.o: mensaje.c salida_alt.h
gcc -c -g mensaje.c

salida.o: salida.c salida_alt.h
gcc -c -g salida.c 
