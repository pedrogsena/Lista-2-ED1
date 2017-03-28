/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - pilhas estáticas contíguas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"
#define TamMaxPEC 10

/* Pilha estática contígua. */
typedef struct pilhaec{
  variavel elemento[TamMaxPEC];
  int topo;
} PilhaEstCon;

/* Cria (melhor, inicializa) pilha vazia. */
void CriaPilhaEstCon(PilhaEstCon *ppilha){
  ppilha->topo=-1;
  return;
}

/* Checa se a pilha está vazia (e retorna 1)
    ou não (e retorna 0). */
int PilhaEstConVazia(PilhaEstCon *ppilha){
  if(ppilha->topo==-1) return 1;
  return 0;
}

/* Checa se a pilha está cheia (e retorna 1)
    ou não (e retorna 0). */
int PilhaEstConCheia(PilhaEstCon *ppilha){
  if(ppilha->topo==TamMaxPEC-1) return 1;
  return 0;
}

/* Informa elemento do topo da pilha, sem removê-lo. */
tipo TopPilhaEstCon(PilhaEstCon *ppilha){
  if(opcao) return ppilha->elemento[ppilha->topo].inteiro;
  else return ppilha->elemento[ppilha->topo].caractere;
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha não está cheia),
    senão retorna 0. */
int PushPilhaEstCon(PilhaEstCon *ppilha, variavel *pnovo){
  if(PilhaEstConCheia(ppilha)) return 0;
  (ppilha->topo)++;
  atribuicao(&(ppilha->elemento[ppilha->topo]),pnovo,opcao);
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha não está vazia),
    senão retorna 0. */
int PopPilhaEstCon(PilhaEstCon *ppilha){
  if(PilhaEstConVazia(ppilha)) return 0;
  (ppilha->topo)--;
  return 1;
}
