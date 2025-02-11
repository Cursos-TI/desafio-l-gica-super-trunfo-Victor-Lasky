#include <stdio.h>



int main() {

    char estado1,estado2,cidade1,resultado,cidade2[20];
    int codigo1,codigo2,populacao1,populacao2,turisticos1,turisticos2,atributo1,atributo2;
    float area1,area2,pib1,pib2;


printf("Carregando...\n\nJogador 1:\n\n");
printf("Digite o codigo da carta:");
  scanf("%s",&codigo1);
printf("Digite o nome da cidade:");
  scanf("%s",&cidade1);
printf("Digite a populacão:");
  canf("%d",&populacao1);
printf("Digite a área:");
  scanf("f",&area1);
printf("Digite o PIB:");
  scanf("f",&pib1);
printf("Digite o número de pontos turísticos:");
  scanf("%d",&turisticos1);

printf("Carregando...\n\nJogador 2:\n\n");
printf("Digite o codigo da carta:");
  scanf("%s",&codigo2);
printf("Digite o nome da cidade:");
  scanf("%s",&cidade2);
printf("Digite a populacão:");
  canf("%d",&populacao2);
printf("Digite a área:");
  scanf("f",&area2);
printf("Digite o PIB:");
  scanf("f",&pib2);
printf("Digite o número de pontos turísticos:");
  scanf("%d",&turisticos2);

  printf("Escolha 2 atributos para serem calculados:");
  printf("1-Comparar qual cidade tem a maior populacão.");
  printf("2-Comparar qual cidade tem a maior área.");
  printf("3-Comparar quaal cidade tem o maior PIB.");
  printf("4-Comparar qual cidade tem o maior número de pontos turísticos.");
  printf("Escolha o primeiro atributo:");
    scaanf("%d",&atributo1);
  printf("Escolha o segundo atributo:");
    scanf("%d",&atributo2);

switch (atributo1,atributo2){
    case 1:
 resultado = (populacao1>populacao2)?' A "%s" tem a maior populacão.',cidade1 : 'A "%s"
printf("Resultado: %s \n",resultado);
}












    return 0;
}
