/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - pilhas din�micas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Pilha din�mica encadeada. */
typedef struct pilhade{
  nodo *topo;
} PilhaDinEnc;

/* Cria (melhor, inicializa) pilha vazia. */
int CriaPilhaDinEnc(PilhaDinEnc *ppilha){
  ppilha->topo=NULL;
}

/* Checa se a pilha est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaDinEncVazia(PilhaDinEnc *ppilha){
  if(ppilha->topo==NULL) return 1;
  return 0;
}

/* Checa se a pilha est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaDinEncCheia(PilhaDinEnc *ppilha){
  nodo *aux;
  int saida;
  aux=(nodo*)malloc(sizeof(nodo));
  if(aux==NULL) saida=1;
  else saida=0;
  free(aux);
  return saida;
}

/* Informa elemento do topo da pilha, sem remov�-lo. */
tipo TopPilhaDinEnc(PilhaDinEnc *ppilha){
  if(opcao) return ppilha->topo->conteudo.inteiro;
  else return ppilha->topo->conteudo.caractere;
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� cheia),
    sen�o retorna 0. */
int PushPilhaDinEnc(PilhaDinEnc *ppilha, variavel *pnovo){
  nodo *aux;
  if(PilhaDinEncCheia(ppilha)) return 0;
  aux=(nodo*)malloc(sizeof(nodo));
  aux->proximo=ppilha->topo;
  ppilha->topo=aux;
  atribuicao(&(ppilha->topo->conteudo),pnovo,opcao);
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� vazia),
    sen�o retorna 0. */
int PopPilhaDinEnc(PilhaDinEnc *ppilha){
  nodo *aux;
  if(PilhaDinEncVazia(ppilha)) return 0;
  aux=ppilha->topo;
  ppilha->topo=ppilha->topo->proximo;
  aux->proximo=NULL;
  free(aux);
  return 1;
}
