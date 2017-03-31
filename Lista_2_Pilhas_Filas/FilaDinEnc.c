/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - filas dinâmicas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria (melhor, inicializa) fila vazia. */
void CriaFilaDinEnc(FilaDinEnc *pfila){
  pfila->inicio=NULL;
  pfila->fim=NULL;
}

/* Checa se a fila está vazia (e retorna 1)
    ou não (e retorna 0). */
int FilaDinEncVazia(FilaDinEnc *pfila){
  if(pfila->inicio==NULL&&pfila->fim==NULL) return 1;
  return 0;
}

/* Checa se a fila está cheia (e retorna 1)
    ou não (e retorna 0). */
int FilaDinEncCheia(FilaDinEnc *pfila){
  nodo *aux;
  int saida;
  aux=(nodo*)malloc(sizeof(nodo));
  if(aux==NULL) saida=1;
  else saida=0;
  free(aux);
  return saida;
}

/* Informa (sem remover) primeiro elemento da fila.
    Não use em filas vazias. */
tipo FirstFilaDinEnc(FilaDinEnc *pfila){
  return pfila->inicio->conteudo;
}

/* Informa (sem remover) último elemento da fila.
    Não use em filas vazias. */
tipo LastFilaDinEnc(FilaDinEnc *pfila){
  return pfila->fim->conteudo;
}

/* Adiciona elemento ao fim da fila;
    retorna 1 se bem-sucedido (fila não está cheia),
    senão retorna 0. */
int InsertFilaDinEnc(FilaDinEnc *pfila, tipo novo){
  nodo *aux;
  if(FilaDinEncCheia(pfila)) return 0;
  aux=(nodo*)malloc(sizeof(nodo));
  aux->conteudo=novo;
  aux->proximo=NULL;
  if(FilaDinEncVazia(pfila)){
    pfila->inicio=aux;
    pfila->fim=pfila->inicio;
    return 1;
  }
  pfila->fim->proximo=aux;
  pfila->fim=aux;
  return 1;
}

/* Remove elemento do inicio da fila;
    retorna 1 se bem-sucedido (fila não está vazia),
    senão retorna 0. */
int RemoveFilaDinEnc(FilaDinEnc *pfila){
  nodo *aux;
  if(FilaDinEncVazia(pfila)) return 0;
  if(pfila->inicio==pfila->fim){
    aux=pfila->inicio;
    pfila->inicio=NULL;
    pfila->fim=NULL;
    free(aux);
    return 1;
  }
  aux=pfila->inicio;
  pfila->inicio=pfila->inicio->proximo;
  aux->proximo=NULL;
  free(aux);
  return 1;
}
