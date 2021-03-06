/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - filas est�ticas cont�guas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria (melhor, inicializa) fila vazia. */
void CriaFilaEstCon(FilaEstCon *pfila){
  pfila->inicio=pfila->fim=-1;
}

/* Checa se a fila est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int FilaEstConVazia(FilaEstCon *pfila){
  if(pfila->inicio==-1&&pfila->fim==-1) return 1;
  return 0;
}

/* Checa se a fila est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
int FilaEstConCheia(FilaEstCon *pfila){
  int expressao=((pfila->inicio)-(pfila->fim))%TamMaxFEC;
  if(expressao==1) return 1;
  return 0;
}

/* Informa (sem remover) primeiro elemento da fila.
    N�o use em filas vazias. */
tipo FirstFilaEstCon(FilaEstCon *pfila){
  return pfila->elemento[pfila->inicio];
}

/* Informa (sem remover) �ltimo elemento da fila.
    N�o use em filas vazias. */
tipo LastFilaEstCon(FilaEstCon *pfila){
  return pfila->elemento[pfila->fim];
}

/* Adiciona elemento ao fim da fila;
    retorna 1 se bem-sucedido (fila n�o est� cheia),
    sen�o retorna 0. */
int InsertFilaEstCon(FilaEstCon *pfila, tipo novo){
  if(FilaEstConCheia(pfila)) return 0;
  if(FilaEstConVazia(pfila)) pfila->inicio=0;
  pfila->fim=(pfila->fim+1)%TamMaxFEC;
  pfila->elemento[pfila->fim]=novo;
  return 1;
}

/* Remove elemento do inicio da fila;
    retorna 1 se bem-sucedido (fila n�o est� vazia),
    sen�o retorna 0. */
int RemoveFilaEstCon(FilaEstCon *pfila){
  if(FilaEstConVazia(pfila)) return 0;
  if(pfila->inicio==pfila->fim){
    pfila->inicio=pfila->fim=-1;
    return 1;
  }
  pfila->inicio=(pfila->inicio+1)%TamMaxFEC;
  return 1;
}
