/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - filas din�micas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Cria (melhor, inicializa) fila vazia. */
void CriaFilaDinEnc(FilaDinEnc *pfila){
  pfila->inicio=NULL;
  pfila->fim=NULL;
}

/* Checa se a fila est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int FilaDinEncVazia(FilaDinEnc *pfila){
  if(pfila->inicio==NULL&&pfila->fim==NULL) return 1;
  return 0;
}

/* Checa se a fila est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
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
    N�o use em filas vazias. */
tipo FirstFilaDinEnc(FilaDinEnc *pfila){
  return pfila->inicio->conteudo;
}

/* Informa (sem remover) �ltimo elemento da fila.
    N�o use em filas vazias. */
tipo LastFilaDinEnc(FilaDinEnc *pfila){
  return pfila->fim->conteudo;
}

/* Adiciona elemento ao fim da fila;
    retorna 1 se bem-sucedido (fila n�o est� cheia),
    sen�o retorna 0. */
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
    retorna 1 se bem-sucedido (fila n�o est� vazia),
    sen�o retorna 0. */
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
