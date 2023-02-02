#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	char Frase[300];
	char Inv[300];
	int tam = 300;
	
	printf("Digite sua Frase ou Palavra: ");
	gets(Frase);
	
	for(int i = 0; i >= 299; i++){
		Inv[i] = Frase[tam - i];
	}
	printf("Frase ou Palavra Digitada: ");
	puts(Frase); 
	printf("Frase ou Palavra Invetida: ");
	puts(Inv); 
	return 0;
	}

