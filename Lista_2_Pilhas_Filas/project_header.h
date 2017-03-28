/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - header */

/* Como os problemas da lista ora usam char, ora usam int,
    union variavel (suportada pelas macros no main)
    suporta ambos os tipos. */
typedef union variavel{
  int inteiro;
  char caractere;
} variavel;

/* Atribuição com union variável; se modo=1, armazena-se int;
    se modo=0, armazena-se char. */
void atribuicao(variavel *recipiente, variavel *conteudo,int modo){
  if(modo) recipiente->inteiro=conteudo->inteiro;
  else recipiente->caractere=conteudo->caractere;
  return;
}

/* Nodo:
    [conteudo|-]->proximo
   para suporte a estruturas de dados encadeadas. */
typedef struct nodo{
  variavel conteudo;
  struct nodo *proximo;
} nodo;
