#include <stdio.h>

int main() {

//variáveis
    char estado1[20], estado2[20], cidade1[20], resultado[20], cidade2[20];
    int codigo1, codigo2, populacao1, populacao2, turisticos1, turisticos2, atributo1, atributo2,modo;
    float area1, area2, pib1, pib2;

//Código para inserir manualmente os dados das cartas.
    printf("Carregando...\n\nJogador 1:\n\n");
    printf("Digite o código da carta:\n");
    scanf("%d", &codigo1);
    getchar(); 

    printf("Digite o nome do estado:\n");
    fgets(estado1, sizeof(estado1), stdin);

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

    printf("Digite o nome do estado:\n");
    fgets(estado2, sizeof(estado2), stdin);

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

//código para mostrar as propriedades de cada carta.
   
    printf("Propriedades da carta, jogador 1\n");
    printf("Código:%.2d\nEstado:%.2s\nCidade:%.2s\nPopulacão:%.2d\nÁrea:%.2f\nPIB:%.2f\nPontos Turísticos:%.2d\n",codigo1,estado1,cidade1,populacao1,area1,pib1,turisticos1);
    printf("Propriedades da carta, jogador 2\n");
    printf("Código:%.2d\nEstado:%.2s\nCidade:%.2s\nPopulacão:%.2d\nÁrea:%.2f\nPIB:%.2f\nPontos Turísticos:%.2d\n",codigo2,estado2,cidade2,populacao2,area2,pib2,turisticos2);

//menu para escolha do modo de jogo
    printf("Modo de Jogo:\n");
    printf("1 - Comparar um atributo de cada carta.\n");
    printf("2 - Comparar dois atributos de cada carta.\n");
    scanf("%d",&modo);
switch(modo){
       
       case 1:
    //código para comparacao de atributos separadamente        
    printf("Escolha 2 atributos para serem calculados:\n");
    printf("1- Comparar qual carta tem a maior População\n");
    printf("2- Comparar qual carta tem a maior Área\n");
    printf("3- Comparar qual carta tem o maior PIB\n");
    printf("4- Comparar qual carta tem o maior número de Pontos Turísticos.\n");
    
    printf("Escolha o primeiro atributo:\n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo:\n");
    scanf("%d", &atributo2);
 
 switch (atributo1){
    case 1:

        if (populacao1>populacao2){
              printf("A carta da cidade de %s Tem a maior populacão.\n",cidade1);
        }else{

        printf("A carta da cidade de %s Tem a maior populacão.\n",cidade2);
    }
 
       break;
     case 2:

        if (area1>area2){
             printf("A carta da cidade de %s Tem a maior área\n",cidade1);
        }else{
            printf("A carta da cidade de %s Tem a maior área\n",cidade2);
        }
     
       break;
     case 3:
        if (pib1<pib2){
            printf("A carta da cidade de %s Tem o maior PIB\n",cidade2);
        }else{
            printf("A carta da cidade de %s Tem o maior PIB\n",cidade1);
        }
      
       break;

     case 4:
        if (turisticos1>turisticos2){
            printf("A carta da cidade de %s Tem o maior número de pontos turísticos.\n",cidade1);
        }else{
            printf("A carta da cidade de %s Tem o maior número de pontos turísticos\n",cidade2);
        }
      break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 }
        
switch (atributo2){
    case 1:

        if (populacao1>populacao2){
              printf("A carta da cidade de %s Tem a maior populacão.\n",cidade1);
        }else{

        printf("A carta da cidade de %s Tem a maior populacão.\n",cidade2);
    }
 
       break;
     case 2:

        if (area1>area2){
             printf("A carta da cidade de %s Tem a maior área\n",cidade1);
        }else{
            printf("A carta cidade de %s Tem a maior área\n",cidade2);
        }
     
       break;
     case 3:
        if (pib1<pib2){
            printf("A carta da cidade de %s Tem o maior PIB\n",cidade2);
        }else{
            printf("A a carta da cidade de %s Tem o maior PIB\n",cidade1);
        }
      
       break;

     case 4:
        if (turisticos1>turisticos2){
            printf("A carta da cidade de %s Tem o maior número de pontos turísticos.\n",cidade1);
        }else{
            printf("A carta da cidade de %s Tem o maior número de pontos turísticos\n",cidade2);
        }
      break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 }

             case 2:

                printf("Menina safada");
                break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 
            }
     


    return 0;
}
