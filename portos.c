#include "portos.h"

/*
/// @brief inicializa as rotas
/// @param portos
*/
void inicializar_rotas(No portos[])
{
    int origem, destino;

    origem = 0;  /* Rotterdam */
    destino = 1; /* Antwerp */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 1;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 1;

    origem = 1;  /* Antwerp */
    destino = 2; /* Hamburg */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 4;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 4;

    origem = 1;  /* Antwerp */
    destino = 3; /* Le Havre */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 3;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 3;

    origem = 1;  /* Antwerp */
    destino = 4; /* Marseille */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 6;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 6;

    origem = 1;  /* Antwerp */
    destino = 5; /* Valencia */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 8;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 8;

    origem = 1;  /* Antwerp */
    destino = 6; /* Algeciras */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 3;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 3;

    origem = 1;  /* Antwerp */
    destino = 7; /* Izmit */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 6;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 6;

    origem = 7;  /* Izmit */
    destino = 8; /* Botas */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 2;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 2;

    origem = 0;  /* Rotterdam */
    destino = 9; /* Amsterdam */
    portos[origem].ligacoes[portos[origem].numLigacoes].destino = &portos[destino];
    portos[origem].ligacoes[portos[origem].numLigacoes++].dias = 2;
    portos[destino].ligacoes[portos[destino].numLigacoes].destino = &portos[origem];
    portos[destino].ligacoes[portos[destino].numLigacoes++].dias = 2;
}

/*
/// @brief inicaliza os dados; as mercadorias, o numero de portos e suas rotas existentes na fig.1
/// @param mercadoria
/// @param num_mercadorias
/// @param portos
/// @param num_portos
*/
void iniciar_dados(Carga mercadoria[], int *num_mercadorias, No portos[], int *num_portos)
{
    /* Inicializar mercadorias */
    strcpy(mercadoria[*num_mercadorias].nome, "Carga1");
    mercadoria[*num_mercadorias].peso = 2.0;
    mercadoria[*num_mercadorias].valor = 31.0;
    (*num_mercadorias)++;

    strcpy(mercadoria[*num_mercadorias].nome, "Carga2");
    mercadoria[*num_mercadorias].peso = 3.0;
    mercadoria[*num_mercadorias].valor = 47.0;
    (*num_mercadorias)++;

    strcpy(mercadoria[*num_mercadorias].nome, "Carga3");
    mercadoria[*num_mercadorias].peso = 1.0;
    mercadoria[*num_mercadorias].valor = 14.0;
    (*num_mercadorias)++;

    /* Inicializar portos */
    strcpy(portos[*num_portos].nome, "Rotterdam");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Antwerp");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Hamburg");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Le_Havre");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Marseille");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Valencia");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Algeciras");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Izmit");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Botas");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    strcpy(portos[*num_portos].nome, "Amsterdam");
    portos[*num_portos].numLigacoes = 0;
    (*num_portos)++;

    /* Inicializar rotas */
    inicializar_rotas(portos);
}

/*
/// @brief menu interativo
*/
void menu()
{
    printf("\n");
    printf("|----------------------------------------------------------------------|\n");
    printf("| Estao disponiveis navios com %d toneladas para a sua gestao           |\n", MAX_TONELADAS);
    printf("|----------------------------------------------------------------------|\n");
    printf("| Gestao de Mercadorias e Rotas Maritimas                              |\n");
    printf("|----------------------------------------------------------------------|\n");
    printf("| 1-> Determinar mercadorias                                           |\n");
    printf("| 2-> Adicionar porto                                                  |\n");
    printf("| 3-> Alterar porto                                                    |\n");
    printf("| 4-> Remover porto                                                    |\n");
    printf("| 5-> Mostrar a lista de portos                                        |\n");
    printf("| 6-> Adicionar rota                                                   |\n");
    printf("| 7-> Mostrar a lista de rotas                                         |\n");
    printf("| 8-> Determinar caminho mais curto (em dias)                          |\n");
    printf("| 9-> Determinar caminho com menos paragens                            |\n");
    printf("| 10-> Sair                                                            |\n");
    printf("|----------------------------------------------------------------------|\n");
    printf("| Digite o que deseja realizar: ");
}

/*
/// @brief reinicializa os valor correspondentes das mercadorias
/// @param mercadoria_embarcada
/// @param carga_embarcada
/// @param toneladas
*/
void reiniciar_mercadoria(Carga mercadoria_embarcada[], int *carga_embarcada, float *toneladas)
{
    int i;
    for (i = 0; i < *carga_embarcada; i++)
    {
        strcpy(mercadoria_embarcada[i].nome, "");
        mercadoria_embarcada[i].peso = 0;
        mercadoria_embarcada[i].valor = 0;
    }
    *carga_embarcada = 0;
    *toneladas = 0;
}

/*
/// @brief determina a mercadoria embarcada
/// @param mercadoria
/// @param num_mercadorias
/// @param mercadoria_embarcada
/// @param carga_embarcada
/// @param toneladas
*/
void determinar_mercadoria(Carga mercadoria[], int num_mercadorias, Carga mercadoria_embarcada[], int *carga_embarcada, float *toneladas)
{
    int i, x;
    char carga[MAX_CHAR];
    x = 1;

    if (*toneladas == MAX_TONELADAS)
    {
        char resposta;
        do
        {
            printf("\nO navio ja se encontra carregado...\n");
            printf("Deseja reiniciar a mercadoria? (s/n)\nR: ");
            scanf(" %c", &resposta);
        } while (tolower(resposta) != 's' && tolower(resposta) != 'n');

        if (tolower(resposta) == 'n')
        {
            printf("\nO navio encontra-se cheio...\n");
            return;
        }
        else
        {
            reiniciar_mercadoria(mercadoria_embarcada, carga_embarcada, toneladas);
            printf("\nMercadoria embarcada reiniciada...\n");
        }
    }

    printf("\nListagem de mercadorias:\n");
    for (i = 0; i < num_mercadorias; i++)
    {
        printf("\nNome: %s, Peso: %.2f toneladas, Valor: %.2f euros\n", mercadoria[i].nome, mercadoria[i].peso, mercadoria[i].valor);
    }
    printf("\n");

    while (*toneladas < MAX_TONELADAS)
    {
        int encontrada = 0;
        printf("\nIndique o nome da carga n (%d): ", x);
        scanf("%s", carga);
        for (i = 0; i < num_mercadorias; i++)
        {
            if (strcmp(carga, mercadoria[i].nome) == 0)
            {
                if ((*toneladas + mercadoria[i].peso) <= MAX_TONELADAS)
                {
                    encontrada = 1;
                    strcpy(mercadoria_embarcada[*carga_embarcada].nome, mercadoria[i].nome);
                    mercadoria_embarcada[*carga_embarcada].peso = mercadoria[i].peso;
                    mercadoria_embarcada[*carga_embarcada].valor = mercadoria[i].valor;
                    (*carga_embarcada)++;
                    *toneladas += mercadoria[i].peso;
                    printf("\nCarga: %s embarcada. \nPeso: %.2f. \nCarga total embarcada: %.2f\n", carga, mercadoria[i].peso, *toneladas);

                    if (*toneladas == MAX_TONELADAS)
                    {
                        printf("\nCapacidade maxima de carga atingida!\n");
                        return;
                    }
                    break;
                }
                else
                {
                    printf("\nAs cargas inseridas excedem o limite da capacidade maxima... Escolha outra carga\n");
                    encontrada = 1;
                    break;
                }
            }
        }

        if (!encontrada)
        {
            printf("\nMercadoria %s nao encontrada...\n", carga);
        }

        x++;
    }
}

/*
/// @brief devolve um valor consoante a existencia do porto
/// @param portos
/// @param num_portos
/// @param novo_porto
/// @return 0 ou 1
*/
int porto_existente(No portos[], int num_portos, char novo_porto[MAX_CHAR])
{
    int i;
    for (i = 0; i < num_portos; i++)
    {
        if (strcmp(portos[i].nome, novo_porto) == 0)
        {
            return 1;
        }
    }
    return 0;
}

/*
/// @brief adiciona novos portos
/// @param portos
/// @param num_portos
*/
void adicionar_porto(No portos[], int *num_portos)
{
    char novo_porto[MAX_CHAR];
    printf("\nIndique um novo porto: ");
    scanf("%s", novo_porto);

    if (porto_existente(portos, *num_portos, novo_porto))
    {
        printf("\nO porto inserido ja existe...\n");
    }
    else
    {
        strcpy(portos[*num_portos].nome, novo_porto);
        portos[*num_portos].numLigacoes = 0;
        (*num_portos)++;
        printf("\nPorto adicionado com sucesso!\n");
    }
}

/*
/// @brief altera os portos existentes
/// @param portos
/// @param num_portos
*/
void alterar_porto(No portos[], int num_portos)
{
    char porto_atual[MAX_CHAR];
    char novo_nome[MAX_CHAR];
    int i;

    printf("\nDigite o nome do porto a ser alterado: ");
    scanf("%s", porto_atual);

    for (i = 0; i < num_portos; i++)
    {
        if (strcmp(portos[i].nome, porto_atual) == 0)
        {
            printf("\nDigite o novo nome do porto: ");
            scanf("%s", novo_nome);

            strcpy(portos[i].nome, novo_nome);
            printf("\nPorto alterado com sucesso!\n");
            return;
        }
    }

    printf("\nPorto nao encontrado...\n");
}

/*
/// @brief remove os portos existentes
/// @param portos
/// @param num_portos
*/
void remover_porto(No portos[], int *num_portos)
{
    char porto_remover[MAX_CHAR];
    int i, j;

    printf("\nDigite o nome do porto a ser removido: ");
    scanf("%s", porto_remover);

    for (i = 0; i < *num_portos; i++)
    {
        if (strcmp(portos[i].nome, porto_remover) == 0)
        {
            for (j = i; j < *num_portos - 1; j++)
            {
                portos[j] = portos[j + 1];
            }
            (*num_portos)--;
            printf("\n");
            printf("Porto removido com sucesso!\n");
            return;
        }
    }

    printf("\nPorto nao encontrado...\n");
}

/*
/// @brief mostra uma lista dos porto existentes
/// @param portos
/// @param num_portos
*/
void mostra_portos(No portos[], int num_portos)
{
    int i;
    printf("\n");
    for (i = 0; i < num_portos; i++)
    {
        printf("| Porto numero (%d): \"%s\"\n", i + 1, portos[i].nome);
    }
}

/*
/// @brief adiciona novas rotas
/// @param portos
/// @param numPortos
*/
void adicionar_rota(No portos[], int numPortos)
{
    char origem[MAX_CHAR], destino[MAX_CHAR];
    int dias;
    int origemIndex = -1, destinoIndex = -1, i;

    if (numPortos < 2)
    {
        printf("\nE necessario pelo menos dois portos para adicionar uma rota!\n");
        return;
    }

    printf("\nPorto de origem: ");
    scanf("%s", origem);
    printf("\nPorto de destino: ");
    scanf("%s", destino);
    printf("\nTempo de viagem (em dias): ");
    scanf("%d", &dias);

    for (i = 0; i < numPortos; i++)
    {
        if (strcmp(portos[i].nome, origem) == 0)
        {
            origemIndex = i;
        }
        if (strcmp(portos[i].nome, destino) == 0)
        {
            destinoIndex = i;
        }
    }

    if (origemIndex == -1 || destinoIndex == -1)
    {
        printf("\nPorto de origem ou destino nao encontrado.\n");
        return;
    }

    portos[origemIndex].ligacoes[portos[origemIndex].numLigacoes].destino = &portos[destinoIndex];
    portos[origemIndex].ligacoes[portos[origemIndex].numLigacoes++].dias = dias;

    printf("\nRota adicionada com sucesso!\n");
}

/*
/// @brief mostra uma lista das rotas existentes
/// @param portos
/// @param numPortos
*/
void listar_rotas(No portos[], int numPortos)
{
    int i, j;
    for (i = 0; i < numPortos; i++)
    {
        for (j = 0; j < portos[i].numLigacoes; j++)
        {
            printf("\nOrigem: %s, Destino: %s, Tempo de viagem: %d dias\n", portos[i].nome, portos[i].ligacoes[j].destino->nome, portos[i].ligacoes[j].dias);
        }
    }
}

/*
/// @brief devolve um valor consoante o indice do porto
/// @param portos
/// @param num_portos
/// @param nome
/// @return 0 ou 1
*/
int encontrarIndicePorto(No portos[], int num_portos, const char *nome)
{
    int i;
    for (i = 0; i < num_portos; i++)
    {
        if (strcmp(portos[i].nome, nome) == 0)
        {
            return i;
        }
    }
    return -1;
}

/*
/// @brief determina o caminho de rotas mais curto entre 2 portos
/// @param portos
/// @param num_portos
*/
void determinarCaminhoMaisCurto(No portos[], int num_portos)
{
    char origem[MAX_CHAR], destino[MAX_CHAR];
    int dist[MAX_PORTOS], visitado[MAX_PORTOS] = {0};
    int predecessores[MAX_PORTOS];
    int origemIndex, destinoIndex;
    int i, j;

    printf("\nPorto de origem: ");
    scanf("%s", origem);
    printf("\nPorto de destino: ");
    scanf("%s", destino);

    for (i = 0; i < MAX_PORTOS; i++)
    {
        dist[i] = INT_MAX;
        predecessores[i] = -1;
    }

    origemIndex = encontrarIndicePorto(portos, num_portos, origem);
    destinoIndex = encontrarIndicePorto(portos, num_portos, destino);

    if (origemIndex == -1 || destinoIndex == -1)
    {
        printf("\nPorto de origem ou destino nao encontrado.\n");
        return;
    }

    dist[origemIndex] = 0;

    for (i = 0; i < num_portos; i++)
    {
        int minDist = INT_MAX, minIndex = -1;
        for (j = 0; j < num_portos; j++)
        {
            if (!visitado[j] && dist[j] < minDist)
            {
                minDist = dist[j];
                minIndex = j;
            }
        }

        if (minIndex == -1)
        {
            break;
        }

        visitado[minIndex] = 1;

        for (j = 0; j < portos[minIndex].numLigacoes; j++)
        {
            No *dest = portos[minIndex].ligacoes[j].destino;
            int destinoIdx = encontrarIndicePorto(portos, num_portos, dest->nome);
            if (!visitado[destinoIdx] && dist[minIndex] + portos[minIndex].ligacoes[j].dias < dist[destinoIdx])
            {
                dist[destinoIdx] = dist[minIndex] + portos[minIndex].ligacoes[j].dias;
                predecessores[destinoIdx] = minIndex;
            }
        }
    }

    if (dist[destinoIndex] == INT_MAX)
    {
        printf("\nNao ha caminho disponivel de %s para %s.\n", origem, destino);
    }
    else
    {
        printf("\nMenor numero de dias de %s para %s e %d dias.\n", origem, destino, dist[destinoIndex]);
    }
}

/*
/// @brief determina o caminho de rotas com menos paragens entre 2 portos
/// @param portos
/// @param num_portos
*/
void determinarCaminhoMenosParagens(No portos[], int num_portos)
{
    char origem[MAX_CHAR], destino[MAX_CHAR];
    int origemIndex, destinoIndex;
    int dist[MAX_PORTOS], visitado[MAX_PORTOS], predecessores[MAX_PORTOS];
    int fila[MAX_PORTOS], frente, traseira;
    int i, atual, proximo;

    printf("\nPorto de origem: ");
    scanf("%s", origem);
    printf("\nPorto de destino: ");
    scanf("%s", destino);

    origemIndex = encontrarIndicePorto(portos, num_portos, origem);
    destinoIndex = encontrarIndicePorto(portos, num_portos, destino);

    if (origemIndex == -1 || destinoIndex == -1)
    {
        printf("\nPorto de origem ou destino nao encontrado.\n");
        return;
    }

    for (i = 0; i < MAX_PORTOS; i++)
    {
        dist[i] = INT_MAX;
        visitado[i] = 0;
        predecessores[i] = -1;
    }
    dist[origemIndex] = 0;
    visitado[origemIndex] = 1;

    frente = 0;
    traseira = 0;
    fila[traseira++] = origemIndex;

    while (frente != traseira)
    {
        atual = fila[frente++];
        for (i = 0; i < portos[atual].numLigacoes; i++)
        {
            proximo = encontrarIndicePorto(portos, num_portos, portos[atual].ligacoes[i].destino->nome);
            if (!visitado[proximo])
            {
                visitado[proximo] = 1;
                dist[proximo] = dist[atual] + 1;
                predecessores[proximo] = atual;
                fila[traseira++] = proximo;
                if (proximo == destinoIndex)
                {
                    frente = traseira;
                    break;
                }
            }
        }
    }

    if (dist[destinoIndex] == INT_MAX)
    {
        printf("\nNao ha caminho disponivel de %s para %s.\n", origem, destino);
    }
    else
    {
        printf("\nMenor numero de paragens de %s para %s = %d paragens.\n", origem, destino, dist[destinoIndex]);
    }
}
