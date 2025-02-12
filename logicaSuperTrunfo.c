#include <stdio.h>

int main() {

    char estado1[20], estado2[20], cidade1[20], resultado[20], cidade2[20];
    int codigo1, codigo2, populacao1, populacao2, turisticos1, turisticos2, atributo1, atributo2;
    float area1, area2, pib1, pib2;

    printf("Carregando...\n\nJogador 1:\n\n");
    printf("Digite o código da carta:\n");
    scanf("%d", &codigo1);
    getchar(); 

    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    printf("Carregando...\n\nJogador 2:\n\n");
    printf("Digite o código da carta:\n");
    scanf("%d", &codigo2);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    printf("Escolha 2 atributos para serem calculados:\n");
    printf("1- Comparar qual cidade tem a maior população.\n");
    printf("2- Comparar qual cidade tem a maior área.\n");
    printf("3- Comparar qual cidade tem o maior PIB.\n");
    printf("4- Comparar qual cidade tem o maior número de pontos turísticos.\n");
    
    printf("Escolha o primeiro atributo:\n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo:\n");
    scanf("%d", &atributo2);
 
 switch (atributo1){
    case 1:

        if (populacao1>populacao2){
              printf("A cidade de %s Tem a maior populacão.\n",cidade1);
        }else{

        printf("A cidade de %s Tem a maior populacão.\n",cidade2);
    }
 
       break;
     case 2:

        if (area1>area2){
             printf("A cidade de %s Tem a maior área\n",cidade1);
        }else{
            printf("A cidade de %s Tem a maior área\n",cidade2);
        }
     
       break;
     case 3:
        if (pib1<pib2){
            printf("A cidade de %s Tem o maior PIB\n",cidade2);
        }else{
            printf("A cidade de %s Tem o maior PIB\n",cidade1);
        }
      
       break;

     case 4:
        if (turisticos1>turisticos2){
            printf("A cidade de %s Tem o maior número de pontos turísticos.\n",cidade1);
        }else{
            printf("A cidade de %s Tem o maior número de pontos turísticos\n",cidade2);
        }
      break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 }
        
switch (atributo2){
    case 1:

        if (populacao1>populacao2){
              printf("A cidade de %s Tem a maior populacão.\n",cidade1);
        }else{

        printf("A cidade de %s Tem a maior populacão.\n",cidade2);
    }
 
       break;
     case 2:

        if (area1>area2){
             printf("A cidade de %s Tem a maior área\n",cidade1);
        }else{
            printf("A cidade de %s Tem a maior área\n",cidade2);
        }
     
       break;
     case 3:
        if (pib1<pib2){
            printf("A cidade de %s Tem o maior PIB\n",cidade2);
        }else{
            printf("A cidade de %s Tem o maior PIB\n",cidade1);
        }
      
       break;

     case 4:
        if (turisticos1>turisticos2){
            printf("A cidade de %s Tem o maior número de pontos turísticos.\n",cidade1);
        }else{
            printf("A cidade de %s Tem o maior número de pontos turísticos\n",cidade2);
        }
      break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 }
    return 0;
}
