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
    - dizer se é par e menor que -30, ou ímpar e maior que 30
    */

    //declaração das variáveis

    int X; 

    //declarção do programa 

    printf("\n Esse programa ira analizar se um numero eh par e menor que -30, ou impar e maior que 30 \n\n");

    //armazenamento do número a ser analizado

    printf("\n Digite um numero inteiro: "); 
    scanf("%i", &X); 

    //condicional para verificar a qual das duas classificações ele pertence

    if((X % 2 == 0) && (X < -30)) printf("\n\n Par e menor que -30"); 
    else if ((X % 2 == 1) && (X > 30)) printf("\n\n Impar e maior que 30"); 
    else printf("\n\n Nenhum resultado"); 

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