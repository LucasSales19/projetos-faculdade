#include <stdio.h>
#include <locale.h>

int main () {
	float reais, cotacao_dolar, dolares;
	setlocale(LC_ALL,"Portuguese");
	
	printf( "digite o valor em reais: ");
	scanf("%f", &reais);
	printf("digite a cotacao do dolar: ");
	scanf ("%f", &cotacao_dolar);
	
	// Calcula a conversao
	if (cotacao_dolar > 0){
		dolares = reais / cotacao_dolar;
		printf ("valor em dolares: %.2f\n", dolares);
	} else {
		printf("cotacao invalida.\n");
	}
	
	return 0;
}

    
		

