/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - pilhas din�micas cont�guas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria e inicializa pilha vazia. */
int CriaPilhaDinCon(PilhaDinCon *ppilha, int capacidade){
  ppilha->elemento=(tipo*)malloc(sizeof(tipo)*capacidade);
  if(ppilha->elemento==NULL) return 0;
  ppilha->tamanho=capacidade;
  ppilha->topo=-1;
  return 1;
}

/* Checa se a pilha est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaDinConVazia(PilhaDinCon *ppilha){
  if(ppilha->topo==-1) return 1;
  return 0;
}

/* Checa se a pilha est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaDinConCheia(PilhaDinCon *ppilha){
  if(ppilha->topo==ppilha->tamanho-1) return 1;
  return 0;
}

/* Informa elemento do topo da pilha, sem remov�-lo.
    N�o use em pilhas vazias. */
tipo TopPilhaDinCon(PilhaDinCon *ppilha){
  return ppilha->elemento[ppilha->topo];
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� cheia),
    sen�o retorna 0. */
int PushPilhaDinCon(PilhaDinCon *ppilha, tipo novo){
  if(PilhaDinConCheia(ppilha)) return 0;
  (ppilha->topo)++;
  ppilha->elemento[ppilha->topo]=novo;
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� vazia),
    sen�o retorna 0. */
int PopPilhaDinCon(PilhaDinCon *ppilha){
  if(PilhaDinConVazia(ppilha)) return 0;
  (ppilha->topo)--;
  return 1;
}
