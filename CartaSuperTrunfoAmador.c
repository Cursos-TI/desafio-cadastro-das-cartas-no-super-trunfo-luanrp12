 #include <stdio.h>

int main () {
    //Código do nível amador do jogo Super Trunfo

    char estado, estado2; // Variavel pra definir a letra da carta
    char codigo[4], codigo2[4]; // Variavel para definir o código da carta
    char cidade[50], cidade2[50]; // Variavel para definir o nome da carta
    int populacao, populacao2; // Variavel para definir o numero de população da carta
    float area, area2; // Variavel para definir o numero da área na carta
    float pib, pib2; // Variavel para definir o numero do pib da carta
    int turistico, turistico2; //Variavel para definir o numero de pontos turisticos da carta

    //Código que vai pegar as informações dadas pelo usuário da carta 1
        printf("Insira a letra do estado:");
        scanf(" %c", &estado);
       
        printf("Insira o código da carta:");
        scanf("%s", &codigo);

        printf("Insira o nome da cidade:");
        scanf("%s", &cidade);

        printf("Insira a quantidade de população:");
        scanf("%d", &populacao);

        printf("Insira a área da Cidade:");
        scanf("%f", &area);

        printf("Insira o pib da cidade:");
        scanf("%f", &pib);

        printf("Insira a quantidade de pontos turisticos:");
        scanf("%d", &turistico);

        //Código que vai pegar as informações dadas pelo usuário da carta 2
        printf("\nInsira a letra do estado 2:");
        scanf(" %c", &estado2); 
       
        printf("Insira o código da carta 2:");
        scanf("%s", &codigo2);

        printf("Insira o nome da cidade 2:");
        scanf("%s", &cidade2);

        printf("Insira a quantidade de população 2:");
        scanf("%d", &populacao2);

        printf("Insira a área da Cidade 2:");
        scanf("%f", &area2);

        printf("Insira o pib da cidade 2:");
        scanf("%f", &pib2);

        printf("Insira a quantidade de pontos turisticos 2:");
        scanf("%d", &turistico2);

        //Código que vai exibir as informações coletadas da carta 1
        printf("\nCarta 1 \n");
        printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado, codigo, cidade);
        printf("População: %d \nÁrea: %f \nPib: %f \n", populacao, area, pib);
        printf("Número de Pontos Túristicos: %d \n", turistico);


        //Código que vai exibir as informações coletadas da carta 2
        printf("\nCarta 2 \n");
        printf("Estado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado2, codigo2, cidade2);
        printf("População: %d \nÁrea: %f \nPib: %f \n", populacao2, area2, pib2);
        printf("Número de Pontos Túristicos: %d \n", turistico2);

    

        return 0;
