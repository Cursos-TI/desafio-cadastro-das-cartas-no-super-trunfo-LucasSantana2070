#include <stdio.h>
 
 int main() {

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


 /*Agora pra esse segundo trabalho irei fazer conforme eu aprendi nas aulas e mais um pouco sobre if e else, algo que ja possuia
 um pouco de conhecimento por conta de um curso que ja realizei.
 Com o codigo anterior ja feito, reutilizei ele pra colocar em pratica a lição desse trabalho. */
  
 if (populacao < 12789 ) {
    printf("Carta 2 venceu na população!\n");
 } else {
    printf("Voce venceu na população!\n");
 }
 if (area < 23004.344) {
    printf("Carta 2 venceu na área!\n");
 } else {
    printf("Voce venceu na área!\n");
 }
 if (PIB < 21432.332) {
    printf("Carta 2 venceu no PIB!\n");  
 } else {
    printf("Voce venceu no PIB!\n");
 }
 if (pontos_turisticos < 25) {
    printf("Carta 2 venceu nos pontos turísticos!\n");
 } else {
    printf("Voce venceu nos pontos turísticos!\n");
 }
 return 0;
 }
