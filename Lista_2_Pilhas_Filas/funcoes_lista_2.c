/* Universidade do Estado da Bahia - UNEB
   DCET-I - Sistemas de Informação - 2017.1
   Disciplina: Estruturas de Dados I
   Pedro Gabriel Sena Cardoso
   Lista de Exercícios 2 - respostas */

#include <stdio.h>
#include <stdlib.h>
#include "project_header.h"

/* Questões 1 a 11: pilhas. */

/* Questão 1 */

int buscasub(char *string){
  int contador0, contador1, contador2;
  int contadorsubs=0;
  int vazio;
  int index, controle;
  char termochar;
  char outrotermochar;
  char maisumtermochar;
  PilhaDinEnc novapilha;
  CriaPilhaDinEnc(&novapilha);
  for(index=0;string[index]!='\0';index++){
    maisumtermochar=string[index];
    if(string[index]=='0'||string[index]=='1'||string[index]=='2')
      vazio=PushPilhaDinEnc(&novapilha,maisumtermochar);
    else{
      if(!PilhaDinEncVazia(&novapilha)&&(string[index]==' '||string[index+1]=='\0')){
        controle=1;
        contador0=contador1=contador2=0;
        while(!PilhaDinEncVazia(&novapilha)&&controle){
          termochar=TopPilhaDinEnc(&novapilha);
          switch(termochar){
            case'0':
              contador0++;
              break;
            case'1':
              contador1++;
              break;
            case'2':
              contador2++;
              break;
          }
          vazio=PopPilhaDinEnc(&novapilha);
          outrotermochar=TopPilhaDinEnc(&novapilha);
          if(termochar=='0'){
            if(outrotermochar=='1'||outrotermochar=='2') controle=0;
          }
          else{
            if(termochar=='1'){
              if(outrotermochar=='2') controle=0;
            }
          }
        }
        CriaPilhaDinEnc(&novapilha);
        if(controle&&contador0>0&&contador1>0&&contador2==contador0) contadorsubs++;
      }
    }
  }
  return contadorsubs;
}

/* Questão 12: filas. */
