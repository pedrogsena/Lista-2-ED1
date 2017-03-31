/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - header */

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

/* Espaço para estruturas de dados. */

/* Nodo:
    [conteudo|-]->proximo
   para suporte a estruturas de dados encadeadas. */
typedef struct nodo{
  tipo conteudo;
  struct nodo *proximo;
} nodo;

/* Pilha estática contígua. */
typedef struct pilhaec{
  tipo elemento[TamMaxPEC];
  int topo;
} PilhaEstCon;

/* Pilha dinâmica contígua. */
typedef struct pilhadc{
  tipo *elemento;
  int topo;
  int tamanho;
} PilhaDinCon;

/* Pilha estática encadeada. */
typedef struct pilhaee{
  nodo elemento[TamMaxPEE];
  nodo *topo;
} PilhaEstEnc;

/* Pilha dinâmica encadeada. */
typedef struct pilhade{
  nodo *topo;
} PilhaDinEnc;

/* Fila estática contígua (circular). */
typedef struct filaec{
  tipo elemento[TamMaxFEC];
  int inicio;
  int fim;
} FilaEstCon;

/* Fila dinâmica contígua (circular). */
typedef struct filadc{
  tipo *elemento;
  int tamanho;
  int inicio;
  int fim;
} FilaDinCon;

/* Fila estática encadeada. */
typedef struct filaee{
  nodo elemento[TamMaxFEE];
  nodo *inicio;
  nodo *fim;
} FilaEstEnc;

/* Fila dinâmica encadeada. */
typedef struct filade{
  nodo *inicio;
  nodo *fim;
} FilaDinEnc;

/* Espaço para protótipos de funções. */

/* Funções da lista de exercícios. */
int buscasub(char*);

/* Funções de pilhas estáticas contíguas. */
void CriaPilhaEstCon(PilhaEstCon*);
int PilhaEstConVazia(PilhaEstCon*);
int PilhaEstConCheia(PilhaEstCon*);
tipo TopPilhaEstCon(PilhaEstCon*);
int PushPilhaEstCon(PilhaEstCon*,tipo);
int PopPilhaEstCon(PilhaEstCon*);

/* Funções de pilhas dinâmicas contíguas. */
int CriaPilhaDinCon(PilhaDinCon*,int);
int PilhaDinConVazia(PilhaDinCon*);
int PilhaDinConCheia(PilhaDinCon*);
tipo TopPilhaDinCon(PilhaDinCon*);
int PushPilhaDinCon(PilhaDinCon*,tipo);
int PopPilhaDinCon(PilhaDinCon*);

/* Funções de pilhas estáticas encadeadas. */
void CriaPilhaEstEnc(PilhaEstEnc*);
int PilhaEstEncVazia(PilhaEstEnc*);
int PilhaEstEncCheia(PilhaEstEnc*);
tipo TopPilhaEstEnc(PilhaEstEnc*);
int PushPilhaEstEnc(PilhaEstEnc*,tipo);
int PopPilhaEstEnc(PilhaEstEnc*);

/* Funções de pilhas dinâmicas encadeadas. */
void CriaPilhaDinEnc(PilhaDinEnc*);
int PilhaDinEncVazia(PilhaDinEnc*);
int PilhaDinEncCheia(PilhaDinEnc*);
tipo TopPilhaDinEnc(PilhaDinEnc*);
int PushPilhaDinEnc(PilhaDinEnc*,tipo);
int PopPilhaDinEnc(PilhaDinEnc*);

/* Funções de filas estáticas contíguas. */
void CriaFilaEstCon(FilaEstCon*);
int FilaEstConVazia(FilaEstCon*);
int FilaEstConCheia(FilaEstCon*);
tipo FirstFilaEstCon(FilaEstCon*);
tipo LastFilaEstCon(FilaEstCon*);
int InsertFilaEstCon(FilaEstCon*,tipo);
int RemoveFilaEstCon(FilaEstCon*);

/* Funções de filas dinâmicas contíguas. */
int CriaFilaDinCon(FilaDinCon*,int);
int FilaDinConVazia(FilaDinCon*);
int FilaDinConCheia(FilaDinCon*);
tipo FirstFilaDinCon(FilaDinCon*);
tipo LastFilaDinCon(FilaDinCon*);
int InsertFilaDinCon(FilaDinCon*,tipo);
int RemoveFilaDinCon(FilaDinCon*);

/* Funções de filas estáticas encadeadas. */
void CriaFilaEstEnc(FilaEstEnc*);
int FilaEstEncVazia(FilaEstEnc*);
int FilaEstEncCheia(FilaEstEnc*);
tipo FirstFilaEstEnc(FilaEstEnc*);
tipo LastFilaEstEnc(FilaEstEnc*);
int InsertFilaEstEnc(FilaEstEnc*,tipo);
int RemoveFilaEstEnc(FilaEstEnc*);

/* Funções de filas dinâmicas encadeadas. */
void CriaFilaDinEnc(FilaDinEnc*);
int FilaDinEncVazia(FilaDinEnc*);
int FilaDinEncCheia(FilaDinEnc*);
tipo FirstFilaDinEnc(FilaDinEnc*);
tipo LastFilaDinEnc(FilaDinEnc*);
int InsertFilaDinEnc(FilaDinEnc*,tipo);
int RemoveFilaDinEnc(FilaDinEnc*);
