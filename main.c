#include "portos.h"

int main()
{
    Carga mercadoria[MAX_MERCADORIAS];
    int num_mercadorias = 0;

    Carga mercadoria_embarcada[MAX_MERCADORIAS];
    int carga_embarcada = 0;
    float toneladas = 0;

    No portos[MAX_PORTOS];
    int num_portos = 0;

    int opcao = 0;
    iniciar_dados(mercadoria, &num_mercadorias, portos, &num_portos);

    do
    {
        menu();
        scanf("%d", &opcao);
        switch (opcao)

        {

        case 1:
            determinar_mercadoria(mercadoria, num_mercadorias, mercadoria_embarcada, &carga_embarcada, &toneladas);
            break;

        case 2:
            if (num_portos < MAX_PORTOS)
            {
                adicionar_porto(portos, &num_portos);
            }
            else
            {
                printf("\nNao e possivel adicionar mais portos...\n");
            }
            break;

        case 3:
            alterar_porto(portos, num_portos);
            break;

        case 4:
            remover_porto(portos, &num_portos);
            break;

        case 5:
            if (num_portos == 0)
            {
                printf("\nNao existem portos listados.\n");
            }
            else
            {
                mostra_portos(portos, num_portos);
            }
            break;

        case 6:
            adicionar_rota(portos, num_portos);
            break;

        case 7:
            listar_rotas(portos, num_portos);
            break;

        case 8:
            determinarCaminhoMaisCurto(portos, num_portos);
            break;

        case 9:
            determinarCaminhoMenosParagens(portos, num_portos);
            break;

        case 10:
            printf("\nHasta la vista...\n");
            return 0;

        default:
            printf("\nOpcao invalida!\n");
            break;
        }

    } while (opcao != 10); /* Caso introduza uma palavra, o codigo entra num loop infinito */

    return 0;
}

/* gcc main.c portos.c -o projeto2 -ansi -pedantic */
/* ./projeto2 */