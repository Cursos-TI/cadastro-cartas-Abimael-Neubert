#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 

#include <stdio.h>

int main() {

    /* ================= CARTA 1 ================= */

    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos_Turisticos1;

    /* ================= CARTA 2 ================= */

    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos_Turisticos2;

    /* ===== ENTRADA CARTA 1 ===== */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c",&Estado1);

    printf("Codigo da carta ");
    scanf(" %s", Codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);
 
    printf("População da Cidade: ");
    scanf(" %d",&Populacao1);
    
    printf("Area (km²): ");
    scanf(" %f",&Area1);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos1);

    /* ===== ENTRADA CARTA 2 ===== */

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &Estado2);

    printf("Codigo da carta: ");
    scanf("%s", Codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Populacao: ");
    scanf("%d", &Populacao2);

    printf("Area (km²): ");
    scanf("%f", &Area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos2);
    
    /* ===== SAIDA CARTA 1 ===== */

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.3f km²\n", Area1);
    printf("PIB: %.3f bilhoes de reais\n", Pib1);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);

    /* ===== SAIDA CARTA 2 ===== */

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Área: %.3f km²\n", Area2);
    printf("PIB: %.3f bilhoes de reais\n", Pib2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);

    return 0;

}
