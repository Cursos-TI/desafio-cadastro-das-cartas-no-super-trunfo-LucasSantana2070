#include <stdio.h>

int main() {
    char escolha;
    while (1) {
        printf("Escolha entre A á H: ");
        scanf(" %c", &escolha);
        if (escolha >= 'A' && escolha <= 'H') {
            printf("Você escolheu a opção: %c\n", escolha);
            break;
        } else {
            printf("Escolha inválida! Tente novamente.\n");
        }
    }

    int C_num;
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    char nome[60];

    while (1) {
    printf("Digite um numero (1 - 4):");
    scanf(" %d", &C_num);
    if (C_num >= 1 && C_num <= 4){
         printf("Você escolheu a cidade número: %d\n", C_num);
            break;
    } else { 
        printf (" Escolha invalida! Tente novamente.\n");
    }
    }

printf("Informe os dados da cidade abaixo.\n");
printf("Qual o nome da cidade (Use _ para espaço): ");
scanf(" %s", &nome);
printf("População: ");
scanf("%d", &populacao);
printf("Área (em km²): ");
scanf("%f", &area);
printf("PIB (em R$): ");
scanf("%f", &PIB);
printf("Pontos turísticos: ");
scanf("%d", &pontos_turisticos);

return 0;
}

