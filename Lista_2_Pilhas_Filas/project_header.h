/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - header */

/* Nodo:
    [conteudo|-]->proximo
   para suporte a estruturas de dados encadeadas. */
typedef struct nodo{
  tipo conteudo;
  struct nodo *proximo;
} nodo;
