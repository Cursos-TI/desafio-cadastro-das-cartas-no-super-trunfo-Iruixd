#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int codigo, popu, pontr;
    float area, PIB;
    char nome[50];

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digete o qual o tamanho da população: \n");
    scanf("%d", &popu);

    printf("Digite qual a área total da cidade: \n");
    scanf("%f", &area);

    printf("Digite qual o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos tem essa cidade?: \n");
    scanf("%d", &pontr);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %d\n", codigo);
    printf("População atual: %d\n", popu);
    printf("Area total: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Quantidade de pontos turísficos: %d\n",pontr);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
