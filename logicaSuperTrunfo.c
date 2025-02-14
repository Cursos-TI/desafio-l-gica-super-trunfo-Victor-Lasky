#include <stdio.h>

int main() {

//variáveis
    char estado1[20], estado2[20], cidade1[20], resultado[20], cidade2[20];
    int codigo1, codigo2, populacao1, populacao2, turisticos1, turisticos2, atributo,modo,comparacao,menu;
    float area1, area2, pib1, pib2;

//Código para inserir manualmente os dados das cartas.
   printf("Bem vindo ao Super Trunfo Cidades.\n");
   printf("____Menu Inicial___\n");
   printf("1- Jogar\n2- Regras\n3- Sair\n");
   scanf("%d",&menu);
   switch(menu){
       case 1:
   
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

    float densidade1 = (float) populacao1/area1;
    float densidade2 = (float) populacao2/area2;

//código para mostrar as propriedades de cada carta.
   
    printf("Propriedades da carta, jogador 1\n");
    printf("Código:%.2d\nEstado:%.2s\nCidade:%.2s\nPopulacão:%.2d\nÁrea:%.2f\nPIB:%.2f\nPontos Turísticos:%.2d\nDensidade Populacional%.2f\n",codigo1,estado1,cidade1,populacao1,area1,pib1,turisticos1,densidade1);
    printf("Propriedades da carta, jogador 2\n");
    printf("Código:%.2d\nEstado:%.2s\nCidade:%.2s\nPopulacão:%.2d\nÁrea:%.2f\nPIB:%.2f\nPontos Turísticos:%.2d\nDensidade Populacional%.2f\n",codigo2,estado2,cidade2,populacao2,area2,pib2,turisticos2,densidade2);

//menu para escolha do modo de jogo
    printf("Modo de Jogo:\n");
    printf("1 - Comparar um atributo de cada carta.\n");
    printf("2 - Comparar dois atributos de cada carta.\n");
    scanf("%d",&modo);
switch(modo){
       
       case 1:
    //código para comparacao de atributos separadamente        
    printf("Escolha 1 atributo para ser comparado entre as cartas:\n");
    printf("1- Comparar qual carta tem a maior População\n");
    printf("2- Comparar qual carta tem a maior Área\n");
    printf("3- Comparar qual carta tem o maior PIB\n");
    printf("4- Comparar qual carta tem o maior número de Pontos Turísticos.\n");
    printf("5- Comparar qual carta tem a menor Densidade Populacional\n");
    
    printf("Escolha o atributo a ser comparado:\n");
    scanf("%d", &atributo);

 switch (atributo){
    case 1:

        if (populacao1>populacao2){
              printf("A carta contendo a cidade com maior populacão é %s:\n",cidade1);
        }else if(populacao1==populacao2){

        printf("Empate!! As duas cartas contém os mesmos atributos.");
          
           }else{

          printf("A carta contendo a cidade com maior populacão é %s:\n",cidade2);
    }
 
       break;
     case 2:

        if (area1>area2){
             printf("A carta contendo a cidade com maior área é %s:\n",cidade1);
            }else if(area1==area2){

                printf("Empate!! As duas cartas contém os mesmos atributos.");
        
            }else{
            printf("A carta contendo a cidade com maior área é %s\n",cidade2);
        }
     
       break;
     case 3:
        if (pib1<pib2){
            printf("A carta contendo a cidade com maior o maior PIB é %s\n",cidade2);
        }else if(pib1==pib2){

            printf("Empate!! As duas cartas contém os mesmos atributos.");
       
        }else{
            printf("A carta contendo a cidade com maior o maior PIB é %s\n",cidade1);
        }
      
       break;

     case 4:
        if (turisticos1>turisticos2){
            printf("A carta contendo a cidade com maior número de Pontos turisticos é %s\n",cidade1);
        }else if(turisticos1==turisticos2){

            printf("Empate!! As duas cartas contém os mesmos atributos.");
       
        }else{
            printf("A carta contendo a cidade com maior número de Pontos turisticos é %s\n",cidade2);
        }
      break;

     case 5:
         if(densidade1<densidade2){
            printf("A carta contendo a cidade com menor densidade populacional é:%s\n",cidade1);
        }else if(densidade1==densidade2){

            printf("Empate!! As duas cartas contém os mesmos atributos.");
        
        }else{
            printf("A carta contendo a cidade com menor densidade populacional é:%s\n",cidade2);
         }
         break;
        
 
        }   
        break;
        default:
        printf("Opcão inválida. Tente Novamente.\n");
 

             case 2:{
            
            printf("Escolha dois atributos para serem comparados:\n");
            printf("obs: Vencerá a carta que tiver exito nos dois atributos.\n");
            printf("1- Comparar a Área e Populacão.\n");
            printf("2- Comparar o PIB e Densidade Populacional\n");
            printf("3- Comparar os Pontos Turísticos e Área.\n");
            scanf("%d",&comparacao);


switch(comparacao){
    case 1:
    if(area1>area2){
        if(populacao1>populacao2){
            printf("Comparando os atributos de Área e Populacão, a cidade ganhadora é:%s\n",cidade1);
           
        }else if(populacao1==populacao2&&area1==area2){

            printf("Empate!! As duas cartas contém os mesmos atributos.");
        }else{
                printf("Comparando os atributos de Área e Populacão, a cidade ganhadora é:%s\n",cidade2);
            }
        }
        break;
    case 2:{
    if(pib1>pib2){
        if(densidade1<densidade2){
            printf("Comparando os atributos de PIB e Densidade Populacional, a cidade ganhadora é:%s\n",cidade1);
        
        }else if(pib1==pib2&&densidade1==densidade2){

            printf("Empate!! As duas cartas contém os mesmos atributos.");
        
        
        }else{
                printf("Comparando os atributos de PIB e Densidade Populacional, a cidade ganhadora é:%s\n",cidade2);
            }
        }
        break;
    case 3:
      if(turisticos1>turisticos2&&area1>area2){
        printf("Comparando os atributos de Pontos Turísticos e Área, a cidade ganhadora é:%s\n",cidade1);
   
    }else if(turisticos1==turisticos2&&area1==area2){

        printf("Empate!! As duas cartas contém os mesmos atributos.");
    
    
    }else{
        printf("Comparando os atributos de Pontos Turísticos e Área, a cidade ganhadora é:%s\n",cidade2);
      }
           
           
            
}

   break;
   default:
   printf("Opcão inválida. Tente Novamente.\n");
 
            }
     

         }
    
        }
   
         break;
   

        
    case 2:

    printf("Funcionamento do Super Trunfo Cartas...\nPasso 1 - Cadastre suas cartas interativamente, colocando informacões como:\nCódigo da Carta, Estado, Cidade, Populacão, Área, PIB, Pontos Turísticos.\n");
    printf("Passo 2 - Escolha o modo de jogo, comparando um atributo entre as cartas ou dois atributos.");
     
    default:
   printf("Opcão inválida. Tente Novamente.\n");
   break;

    } 


    return 0;
}
