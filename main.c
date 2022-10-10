#include <stdio.h>
#include <stdlib.h>

int main(){
    #ifdef __linux
    system("clear");
    #endif

    int animal, quantidade_de_animais;
    float preco_por_kg, consumo_diario_kg, consumo_total = 0, consumo_mensal = 0, custo_mensal = 0;

    printf("Lista de animais:\n\n[1] Leopardo\n[2] Onca Pintada\n[3] Leao\n[4] Jacare\n[5] Tucano\n\nEscolha uma opcao - ");
    scanf("%d", &animal);

    switch(animal){
        case 1: consumo_diario_kg = 5; break;
        case 2: consumo_diario_kg = 6; break;
        case 3: consumo_diario_kg = 6.5; break;
        case 4: consumo_diario_kg = 4; break;
        case 5: consumo_diario_kg = 0.2; break;
        default: printf("Opcao invalida.\n\n");
    }

    printf("Quantos animais dessa especie deseja alimentar? - ");
    scanf("%d", &quantidade_de_animais);
    printf("Custo estimado por quilograma de comida - ");
    scanf("%f", &preco_por_kg);

    consumo_total = consumo_diario_kg * quantidade_de_animais;
    consumo_mensal = consumo_total * 30;
    custo_mensal = consumo_mensal * preco_por_kg;

    printf("\n\nConsumo diario para cada animal: %.3f kg\nConsumo total diario: %.3f kg\nConsumo mensal: %.3f kg\nCusto mensal estimado: R$ %.2f\n\n", consumo_diario_kg, consumo_total, consumo_mensal, custo_mensal);

    #ifdef _WIN32
    system("PAUSE");
    #endif
    return 0;
}