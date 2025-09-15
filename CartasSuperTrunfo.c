#include <stdio.h>

// Programa Super TRUNFO: Cadastra duas cartas com informações de cidades e exibe os resultados.

int main(){
    char Estado1, Estado2;
    char Codigo1[50],Codigo2[50];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2, Turisticos1, Turisticos2;
    float Area1, Area2, Pib1, Pib2;

    //Instruções ao usuário

    printf("Bem vindo ao Super Trunfo de Países! \n\n");
    printf("Antes de começarmos, aqui vão algumas instruções: \n\n");
    printf("----------------//----------------//---------------- \n");
    printf("1. Você deverá inserir os dados de duas cartas. \n");
    printf("2. O campo 'Estado' deve ser apenas UMA letra maiúscula de A a H. \n");
    printf("3. O campo 'Código' é formada pela letra do Estado + um número de 01 a 04. \n");
    printf("4. O 'Nome da Cidade' pode ser qualquer nome. \n");
    printf("  - Evite usar espaços. Digite por exemplo: RiodeJaneiro. \n");
    printf("5. Digite corretamente os valores numéricos para: \n");
    printf("  - População (número inteiro, sem pontos) \n");
    printf("  - Área (use ponto para separar decimais) \n");
    printf("  - PIB (também utilize ponto para separar decimais) \n");
    printf("  - Número de Pontos Turísticos (número inteiro) \n");
    printf("----------------//----------------//---------------- \n");

    //Pedindo ao usuário informações da primeira carta

    printf("Digite a letra do Estado da primeira carta: \n");
    scanf(" %c", &Estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", Cidade1);

    printf("Digite a população da primeira carta: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da primeira carta: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &Turisticos1);

    //Pedindo ao usuário informações da segunda carta

    printf("Parabéns sua primeira carta foi criada, vamos para a segunda: \n\n");
    printf("Digite a letra do Estado da segunda carta: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", Cidade2);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da segunda carta: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &Turisticos2);

    printf("Parabéns sua segunda carta foi criada: \n\n");
    printf("Informações das cartas geradas: \n\n");

    // Adicionado novas variáveis para o cálculo de densidade populacional e pib percapita de cada carta
    // Densidade populacional é número de habitantes por km²
    // Dividindo o pib total pela população para saber o PIB per capita

    float Densidade1, Densidade2;
    float Pibpercapita1, Pibpercapita2;

    Densidade1 = (float) Populacao1 / Area1;
    Densidade2 = (float) Populacao2 / Area2;
    Pibpercapita1 = (float) (Pib1 * 1000000000) / Populacao1;
    Pibpercapita2 = (float) (Pib2 * 1000000000) / Populacao2;

    //Exibindo informações da primeira carta

    printf("Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais \n", Pibpercapita1);

    //Exibindo informações da segunda carta

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais", Pibpercapita2);


    return 0;

}