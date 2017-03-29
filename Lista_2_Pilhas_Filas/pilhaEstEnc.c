/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - pilhas estáticas encadeadas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"
#define TamMaxPEE 10

/* Pilha estática encadeada. */
typedef struct pilhaee{
  nodo elemento[TamMaxPEE];
  nodo *topo;
} PilhaEstEnc;

/* Cria e inicializa pilha vazia. */
void CriaPilhaEstEnc(PilhaEstEnc *ppilha){
  int index;
  for(index=0;index<TamMaxPEE;index++) ppilha->elemento[index].proximo=NULL;
  ppilha->topo=NULL;
  return;
}

/* Checa se a pilha está vazia (e retorna 1)
    ou não (e retorna 0). */
int PilhaEstEncVazia(PilhaEstEnc *ppilha){
  if(ppilha->topo==NULL) return 1;
  return 0;
}

/* Checa se a pilha está cheia (e retorna 1)
    ou não (e retorna 0). */
int PilhaEstEncCheia(PilhaEstEnc *ppilha){
  int contador=0;
  nodo *aux;
  aux=ppilha->topo;
  while(aux!=NULL){
    contador++;
    aux=aux->proximo;
  }
  if(contador==TamMaxPEE) return 1;
  return 0;
}

/* Informa elemento do topo da pilha, sem removê-lo. */
tipo TopPilhaEstEnc(PilhaEstEnc *ppilha){
  return ppilha->topo->conteudo;
}

/* Adiciona elemento ao topo da pilha;
    retorna 1 se bem-sucedido (pilha não está cheia),
    senão retorna 0. */
int PushPilhaEstEnc(PilhaEstEnc *ppilha, tipo novo){
  int indice;
  int continua_loop=1;
  if(PilhaEstEncCheia(ppilha)) return 0;
  if(PilhaEstEncVazia(ppilha)){
    ppilha->elemento[0].conteudo=novo;
    ppilha->topo=ppilha->elemento;
    return 1;
  }
  for(indice=1;(continua_loop)&&(indice<TamMaxPEE);indice++){
    if(ppilha->elemento[indice].proximo=NULL) continua_loop=0;
  }
  ppilha->elemento[indice].conteudo=novo;
  ppilha->elemento[indice].proximo=ppilha->topo;
  ppilha->topo=ppilha->elemento+indice;
  return 1;
}

/* Remove elemento do topo da pilha;
    retorna 1 se bem-sucedido (pilha não está vazia),
    senão retorna 0. */
int PopPilhaEstEnc(PilhaEstEnc *ppilha){
  nodo *aux;
  if(PilhaEstEncVazia(ppilha)) return 0;
  aux=ppilha->topo;
  ppilha->topo=ppilha->topo->proximo;
  aux->proximo=NULL;
  return 1;
}
