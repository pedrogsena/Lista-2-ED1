/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - pilhas est�ticas cont�guas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"
#define TamMaxPEC 10

/* Pilha est�tica cont�gua. */
typedef struct pilhaec{
  tipo elemento[TamMaxPEC];
  int topo;
} PilhaEstCon;

/* Cria (melhor, inicializa) pilha vazia. */
void CriaPilhaEstCon(PilhaEstCon *ppilha){
  ppilha->topo=-1;
  return;
}

/* Checa se a pilha est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaEstConVazia(PilhaEstCon *ppilha){
  if(ppilha->topo==-1) return 1;
  return 0;
}

/* Checa se a pilha est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
int PilhaEstConCheia(PilhaEstCon *ppilha){
  if(ppilha->topo==TamMaxPEC-1) return 1;
  return 0;
}

/* Informa elemento do topo da pilha, sem remov�-lo. */
tipo TopPilhaEstCon(PilhaEstCon *ppilha){
  return ppilha->elemento[ppilha->topo];
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� cheia),
    sen�o retorna 0. */
int PushPilhaEstCon(PilhaEstCon *ppilha, tipo novo){
  if(PilhaEstConCheia(ppilha)) return 0;
  (ppilha->topo)++;
  ppilha->elemento[ppilha->topo]=tipo;
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha n�o est� vazia),
    sen�o retorna 0. */
int PopPilhaEstCon(PilhaEstCon *ppilha){
  if(PilhaEstConVazia(ppilha)) return 0;
  (ppilha->topo)--;
  return 1;
}
