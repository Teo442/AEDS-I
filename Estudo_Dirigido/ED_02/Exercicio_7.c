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
    dizer se o primeiro é ímpar e negativo, e se o segundo é par e positivo
    */
    
    //declaração das variáveis

    int X; 
    int Y; 

    //declaração do programa 

    printf("\n Esse programa ira ler dois valores inteiros e dizer se o primeiro eh impar e negativo e o segundo par e positivo \n\n");

    //declaração das variáveis

    printf("\n Digite o primeiro numero: "); 
    scanf("%i", &X);

    printf("\n Digite o segundo numero: ");
    scanf("%i", &Y);

    //condicional para determinar

    if((X % 2 != 0) && (X < 0)) printf("\n Impar e negativo");
    else printf("\n Nao eh impar ou negativo");
    if ((Y % 2 == 0) && (Y > 0)) printf("\n Par e positivo"); 
    else printf("\n Nao eh par ou positivo"); 

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