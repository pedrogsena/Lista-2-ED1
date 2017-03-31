/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - pilhas dinâmicas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria (melhor, inicializa) pilha vazia. */
void CriaPilhaDinEnc(PilhaDinEnc *ppilha){
  ppilha->topo=NULL;
}

/* Checa se a pilha está vazia (e retorna 1)
    ou não (e retorna 0). */
int PilhaDinEncVazia(PilhaDinEnc *ppilha){
  if(ppilha->topo==NULL) return 1;
  return 0;
}

/* Checa se a pilha está cheia (e retorna 1)
    ou não (e retorna 0). */
int PilhaDinEncCheia(PilhaDinEnc *ppilha){
  nodo *aux;
  int saida;
  aux=(nodo*)malloc(sizeof(nodo));
  if(aux==NULL) saida=1;
  else saida=0;
  free(aux);
  return saida;
}

/* Informa elemento do topo da pilha, sem removê-lo.
    Não use em pilhas vazias. */
tipo TopPilhaDinEnc(PilhaDinEnc *ppilha){
  return ppilha->topo->conteudo;
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha não está cheia),
    senão retorna 0. */
int PushPilhaDinEnc(PilhaDinEnc *ppilha, tipo novo){
  nodo *aux;
  if(PilhaDinEncCheia(ppilha)) return 0;
  aux=(nodo*)malloc(sizeof(nodo));
  aux->proximo=ppilha->topo;
  ppilha->topo=aux;
  ppilha->topo->conteudo=novo;
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha não está vazia),
    senão retorna 0. */
int PopPilhaDinEnc(PilhaDinEnc *ppilha){
  nodo *aux;
  if(PilhaDinEncVazia(ppilha)) return 0;
  aux=ppilha->topo;
  ppilha->topo=ppilha->topo->proximo;
  aux->proximo=NULL;
  free(aux);
  return 1;
}
