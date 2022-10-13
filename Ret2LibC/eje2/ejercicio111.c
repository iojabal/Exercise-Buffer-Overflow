#include <stdlib.h>
#include <string.h>


void genNom(char nombre[]){
	char nombree[100];
	strcpy(nombre, nombree);
	for(int i = 0; i < strlen(nombree); i++){
		printf("Letra: %s", nombree[i] );
	}

	printf("se hizo una copia correctamente: \n");
}



int main(int argc, char **argv[]){
	if(argc < 2){
		printf("este programa recibe 1 argumento \n");
		return -1;
	}
	else{
		genNom(argv[1]);	
	}
	
	
	
	
	return 0;
}
	
