#include <stdio.h>

int main(void){
	int numero, resto;
	
	printf("DIGITE UM VALOR: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	printf("O RESTO (mod) DA DIVISÃO POR 2 = %d", resto);
		
	return 0;
}