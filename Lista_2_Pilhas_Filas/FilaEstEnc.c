/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - filas est�ticas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"
#define TamMaxFEE 10

/* Fila est�tica encadeada. */
typedef struct filaee{
  nodo elemento[TamMaxFEC];
  nodo *inicio;
  nodo *fim;
} FilaEstEnc;

/* Cria (melhor, inicializa) fila vazia. */
void CriaFilaEstEnc(FilaEstEnc *pfila){
  int i;
  for(i=0;i<TamMaxFEE;i++) pfila->elemento[i].proximo=NULL;
  pfila->inicio=NULL;
  pfila->fim=NULL;
}

/* Checa se a fila est� vazia (e retorna 1)
    ou n�o (e retorna 0). */
int FilaEstEncVazia(FilaEstEnc *pfila){
  if(pfila->inicio==NULL&&pfila->fim==NULL) return 1;
  return 0;
}

/* Checa se a fila est� cheia (e retorna 1)
    ou n�o (e retorna 0). */
int FilaEstEncCheia(FilaEstEnc *pfila){
  int contador=0;
  nodo *aux;
  aux=pfila->inicio;
  while(aux!=NULL){
    aux=aux->proximo;
    contador++;
  }
  if(contador==TamMaxFEE) return 1;
  return 0;
}

/* Vers�o alternativa:
int FilaEstEncCheia(FilaEstEnc *pfila){
  int i,NullCounter=0;
  for(i=0;i<TamMaxFEE;i++){
    if(pfila->elemento[i].proximo==NULL) NullCounter++;
    if(NullCounter>1) return 0;
  }
  return 1;
}
*/

/* Informa (sem remover) primeiro elemento da fila.
    N�o use em filas vazias. */
tipo FirstFilaEstEnc(FilaEstEnc *pfila){
  return pfila->inicio->conteudo;
}

/* Informa (sem remover) �ltimo elemento da fila.
    N�o use em filas vazias. */
tipo LastFilaEstEnc(FilaEstEnc *pfila){
  return pfila->fim->conteudo;
}

/* Adiciona elemento ao fim da fila;
    retorna 1 se bem-sucedido (fila n�o est� cheia),
    sen�o retorna 0. */
int InsertFilaEstEnc(FilaEstEnc *pfila, tipo novo){
  int i;
  nodo *aux;
  if(FilaEstEncCheia(pfila)) return 0;
  if(FilaEstEncVazia(pfila)){
    pfila->inicio=pfila->elemento;
    pfila->fim=pfila->inicio;
    pfila->elemento[0].conteudo=novo;
    return 1;
  }
  for(i=0;i<TamMaxFEE;i++){
    aux=pfila->elemento+i;
    if(aux->proximo==NULL&&aux!=pfila->fim) break;
  }
  pfila->fim->proximo=aux;
  pfila->fim=aux;
  pfila->fim->conteudo=novo;
  return 1;
}

/* Remove elemento do inicio da fila;
    retorna 1 se bem-sucedido (fila n�o est� vazia),
    sen�o retorna 0. */
int RemoveFilaEstEnc(FilaEstEnc *pfila){
  nodo *aux;
  if(FilaEstEncVazia(pfila)) return 0;
  if(pfila->inicio==pfila->fim){
    pfila->inicio=NULL;
    pfila->fim=NULL;
    return 1;
  }
  aux=pfila->inicio;
  pfila->inicio=pfila->inicio->proximo;
  aux->proximo=NULL;
  return 1;
}
