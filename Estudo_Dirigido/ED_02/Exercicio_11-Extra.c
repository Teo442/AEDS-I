#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

int main(){
    
    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    
    /*
     Incluir um procedimento para:
    - ler três valores literais (caracteres) do teclado e 
    dizer se o primeiro valor lido está entre os outros dois, ou se é igual a um deles.
    */

   //declaração das variáveis 

   char a; 
   char b; 
   char c; 
   char z[26] = {'abcdefghijklmnopqrstuvwxyz'};

   //declaração do programa 

   printf("\n Este programa ira armazenar 3 letras e determinar se a primeira esta entre as outras duas, ou se eh igual a uma delas \n\n");

   //armazenamento das variáveis

   printf("\n Digite uma letra: ");
   scanf("%c", &a);

   printf("\n Digite uma segunda letra: ");
   scanf("%c", &b);

   printf("\n Digite uma terceira letra: ");
   scanf("%c", &c);

   //verificação da posição das variáveis 

    

   //término do programa 

   printf("\n\n Fim do código \n"); 

   return 0; 

   
   /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 __/__ esboco
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}
