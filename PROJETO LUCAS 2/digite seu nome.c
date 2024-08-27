#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "pt-br");
	char nome[20];
	
	printf("DIGITE SEU PRIMEIRO NOME: ");
	scanf("%s", nome);
	
	printf("\nO NOME DIGITADO FOI: %s", nome);
	
	return 0;
}