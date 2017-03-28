/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - pilhas dinâmicas contíguas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Pilha dinâmica contígua. */
typedef struct pilhadc{
  variavel *elemento;
  int topo;
  int capacidade;
} PilhaDinCon;

/* Cria e inicializa pilha vazia. */
int CriaPilhaDinCon(PilhaDinCon *ppilha, int tamanho){
  elemento=(variavel*)malloc(sizeof(variavel)*tamanho);
  if(elemento==NULL) return 0;
  ppilha->capacidade=tamanho;
  ppilha->topo=-1;
  return 1;
}

/* Checa se a pilha está vazia (e retorna 1)
    ou não (e retorna 0). */
int PilhaDinConVazia(PilhaDinCon *ppilha){
  if(ppilha->topo==-1) return 1;
  return 0;
}

/* Checa se a pilha está cheia (e retorna 1)
    ou não (e retorna 0). */
int PilhaDinConCheia(PilhaDinCon *ppilha){
  if(ppilha->topo==ppilha->capacidade-1) return 1;
  return 0;
}

/* Informa elemento do topo da pilha, sem removê-lo. */
tipo TopPilhaDinCon(PilhaDinCon *ppilha){
  if(opcao) return ppilha->elemento[ppilha->topo].inteiro;
  else return ppilha->elemento[ppilha->topo].caractere;
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha não está cheia),
    senão retorna 0. */
int PushPilhaDinCon(PilhaDinCon *ppilha, variavel *pnovo){
  if(PilhaDinConCheia(ppilha)) return 0;
  (ppilha->topo)++;
  atribuicao(&(ppilha->elemento[ppilha->topo]),pnovo,opcao);
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha não está vazia),
    senão retorna 0. */
int PopPilhaDinCon(PilhaDinCon *ppilha){
  if(PilhaDinConVazia(ppilha)) return 0;
  (ppilha->topo)--;
  return 1;
}
