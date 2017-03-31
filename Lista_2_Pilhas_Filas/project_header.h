/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informa��o - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exerc�cios 2 - header */

#define opcao 0
#if opcao
#define tipo int
#else
#define tipo char
#endif /* para alternar tipo entre int e char */
#define TamMaxPEC 10
#define TamMaxPEE 10
#define TamMaxFEC 10
#define TamMaxFEE 10

/* Espa�o para estruturas de dados. */

/* Nodo:
    [conteudo|-]->proximo
   para suporte a estruturas de dados encadeadas. */
typedef struct nodo{
  tipo conteudo;
  struct nodo *proximo;
} nodo;

/* Pilha est�tica cont�gua. */
typedef struct pilhaec{
  tipo elemento[TamMaxPEC];
  int topo;
} PilhaEstCon;

/* Pilha din�mica cont�gua. */
typedef struct pilhadc{
  tipo *elemento;
  int topo;
  int tamanho;
} PilhaDinCon;

/* Pilha est�tica encadeada. */
typedef struct pilhaee{
  nodo elemento[TamMaxPEE];
  nodo *topo;
} PilhaEstEnc;

/* Pilha din�mica encadeada. */
typedef struct pilhade{
  nodo *topo;
} PilhaDinEnc;

/* Fila est�tica cont�gua (circular). */
typedef struct filaec{
  tipo elemento[TamMaxFEC];
  int inicio;
  int fim;
} FilaEstCon;

/* Fila din�mica cont�gua (circular). */
typedef struct filadc{
  tipo *elemento;
  int tamanho;
  int inicio;
  int fim;
} FilaDinCon;

/* Fila est�tica encadeada. */
typedef struct filaee{
  nodo elemento[TamMaxFEE];
  nodo *inicio;
  nodo *fim;
} FilaEstEnc;

/* Fila din�mica encadeada. */
typedef struct filade{
  nodo *inicio;
  nodo *fim;
} FilaDinEnc;

/* Espa�o para prot�tipos de fun��es. */

/* Fun��es da lista de exerc�cios. */
int buscasub(char*);

/* Fun��es de pilhas est�ticas cont�guas. */
void CriaPilhaEstCon(PilhaEstCon*);
int PilhaEstConVazia(PilhaEstCon*);
int PilhaEstConCheia(PilhaEstCon*);
tipo TopPilhaEstCon(PilhaEstCon*);
int PushPilhaEstCon(PilhaEstCon*,tipo);
int PopPilhaEstCon(PilhaEstCon*);

/* Fun��es de pilhas din�micas cont�guas. */
int CriaPilhaDinCon(PilhaDinCon*,int);
int PilhaDinConVazia(PilhaDinCon*);
int PilhaDinConCheia(PilhaDinCon*);
tipo TopPilhaDinCon(PilhaDinCon*);
int PushPilhaDinCon(PilhaDinCon*,tipo);
int PopPilhaDinCon(PilhaDinCon*);

/* Fun��es de pilhas est�ticas encadeadas. */
void CriaPilhaEstEnc(PilhaEstEnc*);
int PilhaEstEncVazia(PilhaEstEnc*);
int PilhaEstEncCheia(PilhaEstEnc*);
tipo TopPilhaEstEnc(PilhaEstEnc*);
int PushPilhaEstEnc(PilhaEstEnc*,tipo);
int PopPilhaEstEnc(PilhaEstEnc*);

/* Fun��es de pilhas din�micas encadeadas. */
void CriaPilhaDinEnc(PilhaDinEnc*);
int PilhaDinEncVazia(PilhaDinEnc*);
int PilhaDinEncCheia(PilhaDinEnc*);
tipo TopPilhaDinEnc(PilhaDinEnc*);
int PushPilhaDinEnc(PilhaDinEnc*,tipo);
int PopPilhaDinEnc(PilhaDinEnc*);

/* Fun��es de filas est�ticas cont�guas. */
void CriaFilaEstCon(FilaEstCon*);
int FilaEstConVazia(FilaEstCon*);
int FilaEstConCheia(FilaEstCon*);
tipo FirstFilaEstCon(FilaEstCon*);
tipo LastFilaEstCon(FilaEstCon*);
int InsertFilaEstCon(FilaEstCon*,tipo);
int RemoveFilaEstCon(FilaEstCon*);

/* Fun��es de filas din�micas cont�guas. */
int CriaFilaDinCon(FilaDinCon*,int);
int FilaDinConVazia(FilaDinCon*);
int FilaDinConCheia(FilaDinCon*);
tipo FirstFilaDinCon(FilaDinCon*);
tipo LastFilaDinCon(FilaDinCon*);
int InsertFilaDinCon(FilaDinCon*,tipo);
int RemoveFilaDinCon(FilaDinCon*);

/* Fun��es de filas est�ticas encadeadas. */
void CriaFilaEstEnc(FilaEstEnc*);
int FilaEstEncVazia(FilaEstEnc*);
int FilaEstEncCheia(FilaEstEnc*);
tipo FirstFilaEstEnc(FilaEstEnc*);
tipo LastFilaEstEnc(FilaEstEnc*);
int InsertFilaEstEnc(FilaEstEnc*,tipo);
int RemoveFilaEstEnc(FilaEstEnc*);

/* Fun��es de filas din�micas encadeadas. */
void CriaFilaDinEnc(FilaDinEnc*);
int FilaDinEncVazia(FilaDinEnc*);
int FilaDinEncCheia(FilaDinEnc*);
tipo FirstFilaDinEnc(FilaDinEnc*);
tipo LastFilaDinEnc(FilaDinEnc*);
int InsertFilaDinEnc(FilaDinEnc*,tipo);
int RemoveFilaDinEnc(FilaDinEnc*);
