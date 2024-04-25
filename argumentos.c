#include <stdio.h>

int main(int argc, char *argv[]){
	// imprimir el numero de argumentos
	printf("Numero de argumentos: %d\n", argc);
	
	//imprimir argumentos uno por uno
	for(int i = 0; i < argc; i++){
	printf("Argumento %d: %s\n", i, argv[i]);
	}
	
	return 0;
}
