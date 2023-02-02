#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	char frase[300];
	char Car; // Car = Caractere
	int Q=0; //Q = Quantidade
	
	 printf("Digite uma frase qualquer : ");
	 gets(frase);
	 printf("Digite uma letra para procurar : ");
	 scanf("%c", &Car);
	 
	 for(int i=0; i < 300; i++){
	 	if(frase[i] == Car){
	 		Q++;
		 }
	 }
	 
	 printf("Sua Frase ou Palavavra é: ");
	 puts(frase);
	 printf("\n");
	 printf("O Caractere '%c' Se Repetiu %d Vezes na Frase ou Palavra\n", Car,Q);
	
	return 0;
	
	}
