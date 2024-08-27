#include <stdio.h>
#include <locale.h>

int main(){
	float salario_hora, horas_trabalhadas,salario_total;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o salario por hora: ");
	scanf("%f", &salario_hora);
	printf ("digite o numero de horas trabalhadas: ");
	scanf("%f", &horas_trabalhadas);
	
	// Verificar se houve horas extras
	if (horas_trabalhadas > 40) {
		salario_total = (salario_hora * 40) + ((horas_trabalhadas - 40) * salario_hora * 1.5);
		printf("salario total com horas extras: %.2f\n", salario_total);
	} else {
		salario_total = salario_hora * horas_trabalhadas;
		printf("salario_hora total: %.2f\n", salario_total);
	
	}
	return 0;
}

    
		

