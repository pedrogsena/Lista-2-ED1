/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - filas dinâmicas contíguas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria (melhor, inicializa) fila vazia. */
int CriaFilaDinCon(FilaDinCon *pfila, int capacidade){
  pfila->elemento=(tipo*)malloc(sizeof(tipo)*capacidade);
  if(pfila->elemento==NULL) return 0;
  pfila->tamanho=capacidade;
  pfila->inicio=pfila->fim=-1;
  return 1;
}

/* Checa se a fila está vazia (e retorna 1)
    ou não (e retorna 0). */
int FilaDinConVazia(FilaDinCon *pfila){
  if(pfila->inicio==-1&&pfila->fim==-1) return 1;
  return 0;
}

/* Checa se a fila está cheia (e retorna 1)
    ou não (e retorna 0). */
int FilaDinConCheia(FilaDinCon *pfila){
  int expressao=((pfila->inicio)-(pfila->fim))%(pfila->tamanho);
  if(expressao==1) return 1;
  return 0;
}

/* Informa (sem remover) primeiro elemento da fila.
    Não use em filas vazias. */
tipo FirstFilaDinCon(FilaDinCon *pfila){
  return pfila->elemento[pfila->inicio];
}

/* Informa (sem remover) último elemento da fila.
    Não use em filas vazias. */
tipo LastFilaDinCon(FilaDinCon *pfila){
  return pfila->elemento[pfila->fim];
}

/* Adiciona elemento ao fim da fila;
    retorna 1 se bem-sucedido (fila não está cheia),
    senão retorna 0. */
int InsertFilaDinCon(FilaDinCon *pfila, tipo novo){
  if(FilaDinConCheia(pfila)) return 0;
  if(FilaDinConVazia(pfila)) pfila->inicio=0;
  pfila->fim=(pfila->fim+1)%(pfila->tamanho);
  pfila->elemento[pfila->fim]=novo;
  return 1;
}

/* Remove elemento do inicio da fila;
    retorna 1 se bem-sucedido (fila não está vazia),
    senão retorna 0. */
int RemoveFilaDinCon(FilaDinCon *pfila){
  if(FilaDinConVazia(pfila)) return 0;
  if(pfila->inicio==pfila->fim){
    pfila->inicio=pfila->fim=-1;
    return 1;
  }
  pfila->inicio=(pfila->inicio+1)%(pfila->tamanho);
  return 1;
}
