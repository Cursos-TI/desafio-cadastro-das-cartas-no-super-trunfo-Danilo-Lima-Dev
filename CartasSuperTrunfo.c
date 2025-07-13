#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float superpoder1, superpoder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1); //Deixei um espaço antes do % para ignorar o ENTER do buffer

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    //Aqui estou declarando a variavel densidade da carta 1, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis

    densidade1 = populacao1 / area1;

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    //Aqui estou declarando a variavel densidade da carta 1, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis
    pibpc1 = pib1 / populacao1;

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
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    //Aqui estou declarando a variavel densidade da carta 2, utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    //Declarei aqui, logo depois da inserção dos dados em suas variaveis
    densidade2 = populacao2 / area2;

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    //Aqui estou declarando a variavel densidade da carta , utilizando o operador matematico de divisão e ja armazenando o valor na variavel
    pibpc2 = pib2 / populacao2;

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Exibição dos dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("A densidade populacional é de: %.2f\n", densidade1);
    printf("O PIB Per Capita é de: %.10f\n", pibpc1);

    printf("\n");//Aqui dexei pulando uma linha para ficar mais apresentavel na hora da impressão

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("A densidade populacional é de: %.2f\n", densidade2);
    printf("O PIB Per Capita é de: %.10f\n", pibpc2);

    // Super Poder
    //Aqui realiza o calculo e dos dados armazenados nas variáveis e armazena em uma nova chamada superpoder1 e superpoder2
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpc1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpc2 + (1.0 / densidade2);

    // Comparações
    //Comparações e impressões das informações utilizando  os operadores lógicos dos dados já armazenados nas variáveis anteriores
    printf("\nComparação de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}
