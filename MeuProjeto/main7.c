#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    
    printf("Calculadora Simples\n");
    printf("1 - Soma \n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    
    while (1) {
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 5) {
            printf("Saindo... \n");
            break;
        }
        
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero!\n");
                }
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    
    return 0;
}
