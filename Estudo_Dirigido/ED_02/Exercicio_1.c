#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    /*
    Incluir um procedimento para:
    - ler um valor inteiro do teclado e 
    - dizer se é par ou ímpar.
    DICA: Considerar o zero como par.
    */

    //declaração das variáveis

    int X; 

    //declaração do programa

    printf("\n Esse programa ira analizar se um numero inteiro eh par ou impar \n\n");

    //armazenamento do número a ser analizado

    printf("\n Digite um numero inteiro: "); 
    scanf("%i", &X); 

    //condição para o número ser confirmado como par ou impar

    if(X % 2 == 0) printf("\n\n Par"); 
    else printf("\n\n Impar"); 

    //término do programa

    printf("\n\n Fim do programa \n");

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