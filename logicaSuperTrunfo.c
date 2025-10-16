#include <stdio.h>

int main() {

// Apresentação das variáveis das cartas 1 e 2

    
    char Estado1[3], Estado2[3];                           // letra referente ao estado da carta.
    char Codigo1[4], Codigo2[4];                           // codigo da carta - limitado a 3 caracteres.
    char Nome1[50], Nome2[50];                             // nome da cidade.
    unsigned long int Populacao1, Populacao2;              // numero de habitantes 
    int Pontos1, Pontos2;                                  // numero de pontos turisticos na cidade.
    float Area1, Area2;                                    // area geografica da cidade.
    float PIB1, PIB2;                                      // produto interno bruto.
    float Densidade1, Densidade2;                          // densidade populacional da cidade.
    float Percapta1, Percapta2;                            // PIB per capta da cidade.
    float SuperPoder1, SuperPoder2;                        // Será a soma de todos os valores captados, para definir o super poder da carta.

// Apresentação de todas as varáveis, vamos realizar a entrada de dados carta 1

    printf("\n Preencha os campos abaixo com os dados da cidade escolhida na CARTA 1 e CARTA 2:\n"); 
    printf("\n Carta 1: \n");

    printf("Estado: ");                        // Utilizar uma letra de A a H para identificar o estado 
    scanf("%2s", &Estado1);                    
        
    printf("Codigo da carta(ex: B03): ");      // Inserir a letra do estado seguida de um numero de 01 a 04.  
    scanf("%3s", &Codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", &Nome1);

    printf("População: ");                      // Acrescentar o numero de habitantes da cidade.
    scanf("%lu", &Populacao1);     

    printf("Area: ");                           // Area da cidade em quilometros quadrados.
    scanf("%f", &Area1);

    printf("PIB: ");                            // Produto interno bruto da cidade.
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");    // Inserir a quantidade de pontos turisticos da cidade.
    scanf("%d", &Pontos1);
    

// Entrada de dados carta 2

    printf("\n Carta 2: \n");
    
    printf("Estado: ");                          // Utilizar uma letra de A a H para identificar o estado.
    scanf("%2s", &Estado2);                      
        
    printf("Codigo da carta(ex: B03): ");        // Inserir a letra do estado seguida de um numero de 01 a 04.  
    scanf("%3s", &Codigo2); 

    printf("Nome da cidade: ");
    scanf("%49s", &Nome2);

    printf("População: ");                       // Acrescentar o numero de habitantes da cidade.
    scanf("%d", &Populacao2);     

    printf("Area: ");                            // Area da cidade em quilometros quadrados.
    scanf("%f", &Area2);

    printf("PIB: ");                             // Produto interno bruto da cidade.
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");     // Inserir a quantidade de pontos turisticos da cidade.
    scanf("%d", &Pontos2);
    

// Calculo das métricas:
// carta 1:

    Percapta1 = (PIB1*1000000000) / (float)Populacao1;              // PIB dividido pela população nos dará o valor do PIB per capta.
    Densidade1 = (float)Populacao1 / Area1;                         // o valor declarado na população será divido pela area para descobrir a densidade.
    SuperPoder1 = ((float)Populacao1 + Area1 + PIB1 + (float)Pontos1 + Percapta1)+(1.0 / Densidade1);   // Soma de todos os valores.

// carta 2:  

    Percapta2 = (PIB2*1000000000) / (float)Populacao2;               // PIB dividido pela população nos dará o valor do PIB per capta.
    Densidade2 = (float)Populacao2 / Area2;                          // o valor declarado na população será divido pela area para descobrir a densidade.
    SuperPoder2 = ((float)Populacao2 + Area2 + PIB2 + (float)Pontos2 + Percapta2)+(1.0 / Densidade2);   // Soma de todos os valores.

  
// Impressão dos resultados coletados e tratados.

    printf("\n Abaixo o resultado apresentado:");

//Resultado dos dados preenchidos anteriormente CARTA 1:

    printf("\n Carta 1: \n");
    printf("- Estado: %s\n", Estado1);
    printf("- Codigo da carta: %s\n", Codigo1);
    printf("- Nome da cidade: %s\n- População: %lu\n", Nome1, Populacao1);     
    printf("- Area: %.2f km² \n- PIB: %.2f milhões \n", Area1, PIB1);
    printf("- Numero de pontos turisticos: %d\n", Pontos1);  
    printf("- Densidade Populacional: %.2f hab/km² \n", Densidade1);
    printf("- PIB per capta: %.2f reais \n", Percapta1);
    printf("- Super Poder: %.2f\n", SuperPoder1);

    
//Resultado dos dados preenchidos anteriormente CARTA 2:

    printf("\n Carta 2: \n");
    printf("- Estado: %s\n", Estado2);
    printf("- Codigo da carta: %s\n", Codigo2);
    printf("- Nome da cidade: %s\n- População: %lu\n", Nome2, Populacao2);
    printf("- Area: %.2f km² \n- PIB: %.2f milhões \n", Area2, PIB2);
    printf("- Numero de pontos turisticos: %d\n", Pontos2);
    printf("- Densidade Populacional: %.2f hab/km² \n", Densidade2);
    printf("- PIB per capta: %.2f reais \n", Percapta2);
    printf("- Super Poder: %.2f \n", SuperPoder2);


// Calculo de metricas de comparação das cartas:

    int opcao1, opcao2;
    float opcao1A, opcao2A, opcao1B, opcao2B, soma1, soma2;  
    int Densidadee1 = 0, Densidadee2 = 0;  //Flags para tratar comparação inversa dos valores.


//Escolha do 1º atributo de comparação

    printf("\n Comparação das cartas \n");
    printf("Escolha o PRIMEIRO atributo de comparação:\n");
    printf("1 - População \n 2 - Area \n 3 - Pontos Turisticos \n 4 - PIB \n");
    printf("5 - Densidade populacional(menor vence)\n 6 - PIB percapta \n 7 - Super poder \n");
    
//Leitura da primeira opção de comparação

    printf("Digite a opção de comparação desejada:");
    scanf("%d", &opcao1);


    switch (opcao1) {
        case 1: opcao1A = Populacao1; opcao2A = Populacao2; break;
        case 2: opcao1A = Area1; opcao2A = Area2; break;
        case 3: opcao1A = Pontos1; opcao2A = Pontos2; break;
        case 4: opcao1A = PIB1; opcao2A = PIB2; break;
        case 5: opcao1A = Densidade1; opcao2A = Densidade2; Densidadee1 = 1; break;
        case 6: opcao1A = Percapta1; opcao2A = Percapta2; break;
        case 7: opcao1A = SuperPoder1; opcao2A = SuperPoder2; break;
        default: printf("\n Opção inválida!\n"); 
        
        return 1;
    } 


//Escolha do 2º atributo de comparação (não pode ser igual ao primeiro)
    
    printf("\n Comparação das cartas \n");
    printf("Escolha o SEGUNDO atributo de comparação:\n");
    printf("1 - População \n 2 - Area \n 3 - Pontos Turisticos \n 4 - PIB \n");
    printf("5 - Densidade populacional(menor vence)\n 6 - PIB percapta \n 7 - Super poder \n");
    
//Leitura da segunda opção de comparação

    printf("Digite a opção de comparação desejada:");
    scanf("%d", &opcao2);


    if (opcao2 == opcao1) {
        printf ("\n ATENÇÃO: O SEGUNDO ATRIBUTO DEVE SER DIFERENTE DO PRIMEIRO");
        return 1;
    }
    

    switch (opcao2) {
        case 1: opcao1B = Populacao1; opcao2B = Populacao2; break;
        case 2: opcao1B = Area1; opcao2B = Area2; break;
        case 3: opcao1B = Pontos1; opcao2B = Pontos2; break;
        case 4: opcao1B = PIB1; opcao2B = PIB2; break;
        case 5: opcao1B = Densidade1; opcao2B = Densidade2; Densidadee2 = 1; break;
        case 6: opcao1B = Percapta1; opcao2B = Percapta2; break;
        case 7: opcao1B = SuperPoder1; opcao2B = SuperPoder2; break;
        default: printf("\n Opção inválida!\n"); 

        return 1;
    } 

    
// Soma dos atributos escolhidos (inverte a soma para densidade).

    soma1 = (Densidadee1 ? -opcao1A : opcao1A) + (Densidadee2 ? -opcao1B : opcao1B);
    soma2 = (Densidadee1 ? -opcao2A : opcao2A) + (Densidadee2 ? -opcao2B : opcao2B);


// Exibição do resultado:

    printf("\n--- Resultado da Comparação das cartas ---\n");
    printf("%s: %.2f + %.2f = %.2f\n", Nome1, opcao1A, opcao1B, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", Nome2, opcao2A, opcao2B, soma2);

// Determinar o vencedor considerando a densidade inversa corretamente.

    if (soma1 > soma2) {
        printf("\n Carta 1 venceu: %s\n", Nome1);
    } 
    else if (soma2 > soma1) {
        printf("\n Carta 2 venceu: %s\n", Nome2);
    } 
    else {
        printf("\nEmpate!\n");
    }

    return 0;
}
