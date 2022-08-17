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
    - ler dois valores inteiros do teclado e 
    dizer se o primeiro é par e o segundo é ímpar.

    */

    //declaração das variáveis

    int X; 
    int Y; 

    //declaração do programa 

    printf("\n Esse programa ira ler dois valores inteiros e definir se o primeiro eh par e o segundo eh impar \n\n");

    //armazenamento das variáveis

    printf("\n Digite o primeiro numero: "); 
    scanf("%i", &X);

    printf("\n Digite o segundo numero: ");
    scanf("%i", &Y);

    //condicional para determinar se os numeros sao par e impar

    if((X % 2 == 0) && (Y % 2 != 0)) printf("\n (%i, %i), onde o primeiro eh par e o segundo eh impar", X, Y);
    else printf("\n (%i, %i), o primeiro nao eh par ou o segundo nao eh impar", X, Y);

    //término do programa 
    
    printf("\n\n Fim do programa \n");

    
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