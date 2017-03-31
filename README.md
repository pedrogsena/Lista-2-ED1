# Lista-2-ED1
Lista de exercícios n. 2 p/ Estruturas de Dados 1.

(31/03/2017) Atualizando arquivos; agora com o header devidamente preenchido: defines, estruturas, e protótipos de funções. Além de mais pequenas correções. Testado no CodeBlocks: sem erros, mas três warnings:

 - nas funções PilhaDinEncVazia() e FilaDinEncVazia(), os argumentos \*ppilha e \*pfila não são usados -- são estruturas sem capacidade máxima previamente definida, logo a capacidade delas depende da memória disponível. Estou aberto a sugestões sobre como incorporar as variáveis, mas mantendo a propriedade de não ter capacidade máxima previamente definida.

 - na função buscasubs(), a variável vazio até recebe valores mas não é empregada -- precisava apenas empilhar e desempilhar elementos, mas no algoritmo desta função específica os retornos não são necessários.

(31/03/2017) Atualizando arquivos; agora com implementação de filas, além de pequenas correções.

(29/03/2017) Atualizando arquivos; agora sem a union variavel, usando apenas macros para alternar entre int e char.

(27/03/2017) Implementações de pilhas (as de filas seguirão num update futuro) e outras coisas úteis; respostas dos exercícios seguirão num update futuro.
