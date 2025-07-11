#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;


    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1); //Deixei um espaço antes do % para ignorar o ENTER do buffer

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    //Aqui estou declarando a variavel densidade da carta 1, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis
    float densidade1 = (populacao1 / area1);

    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
 
    //Aqui estou declarando a variavel densidade da carta 1, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis
    float pibpc1 = (pib1 / populacao1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    //Aqui estou declarando a variavel densidade da carta 2, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis
    float densidade2 = (populacao2 / area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
        //Aqui estou declarando a variavel densidade da carta , utilizando o operador matematico de divisão e ja armazenando o valor na variavel
        //Declarei aqui, logo depois da inserção dos dados em suas variaveis
        float pibpc2 = (pib2 / populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Exibicao dos dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("A densidade populacional é de: %.2f\n", densidade1);
    printf("O PIB Per Capta é de: %.2f\n", pibpc1);

    printf("\n"); //Aqui dexei pulando uma linha para ficar mais apresentavel na hora da impressão

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("A densidade populacional é de: %.2f\n", densidade2);
    printf("O PIB Per Capta é de: %.2f\n", pibpc2);

    return 0;
}
