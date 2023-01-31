#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portugues_Brazil");
	
		char frase[500];
		int vogal = 0;
		
		printf("Digite Uma Frase: ");
		gets (frase);
		
		printf("A frase digitada tem as seguintes vogais:\n ");
		for(int i = 0; i < 500; i++){
			if((frase[i] == 'A') || (frase[i] == 'E')|| (frase[i] == 'I') || (frase[i] == 'O') || (frase[i] == 'U')){	
				vogal++;
			}
			if(frase[i] == '\0') {
				break;
			}
		}
		printf("Frase Digitada: ");
		puts(frase);
		printf("Sua frase contem %d vogais", vogal);
			
		return 0;
		}
