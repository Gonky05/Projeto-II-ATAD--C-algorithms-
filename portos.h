#ifndef PORTOS_H
#define PORTOS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_CHAR 100
#define MAX_TONELADAS 4
#define MAX_MERCADORIAS 100
#define MAX_PORTOS 100

typedef struct No No;

typedef struct
{
    No *destino;
    int dias;

} Aresta;

struct No
{
    char nome[MAX_CHAR];
    Aresta ligacoes[MAX_PORTOS];
    int numLigacoes;
};

typedef struct
{
    char nome[MAX_CHAR];
    float peso;
    float valor;

} Carga;

typedef struct
{
    char nome[MAX_CHAR];
    Carga cargas[MAX_MERCADORIAS];
    int numCargas;
    char localizacao_atual[MAX_CHAR];
    char destino[MAX_CHAR];
    float max_carga;

} Barco;

void inicializar_rotas(No portos[]);
void iniciar_dados(Carga mercadoria[], int *num_mercadorias, No portos[], int *num_portos);
void menu();
void reiniciar_mercadoria(Carga mercadoria_embarcada[], int *carga_embarcada, float *toneladas);
void determinar_mercadoria(Carga mercadoria[], int num_mercadorias, Carga mercadoria_embarcada[], int *carga_embarcada, float *toneladas);
int porto_existente(No portos[], int num_portos, char novo_porto[MAX_CHAR]);
void adicionar_porto(No portos[], int *num_portos);
void alterar_porto(No portos[], int num_portos);
void remover_porto(No portos[], int *num_portos);
void mostra_portos(No portos[], int num_portos);
void adicionar_rota(No portos[], int num_portos);
void listar_rotas(No portos[], int num_portos);
int encontrarIndicePorto(No portos[], int num_portos, const char *nome);
void determinarCaminhoMaisCurto(No portos[], int num_portos);
void determinarCaminhoMenosParagens(No portos[], int num_portos);

#endif