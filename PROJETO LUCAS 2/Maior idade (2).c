#include <stdio.h>
#include <locale.h>

int main(){
	int idade;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("DIGITE SUA IDADE: ");
	scanf("%d", &idade);
	
	//verifica se a pessoa é maior de idade
	if ("idade >= 18") {
		printf("VOCÊ E MAIOR DE IDADE.\n");
	} else {
		printf("VOCE E MENOR DE IDADE.\n");
	}
	return 0;
}

    
		

