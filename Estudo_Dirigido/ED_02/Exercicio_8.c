#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    /*
    ) Incluir um procedimento para:
    - ler dois valores reais do teclado e 
    dizer se o segundo é menor, igual ou maior que o primeiro.
    */

    //declaração das variáveis

    float X; 
    float Y;

    //declaração do programa

    printf("\n Esse programa ira dizer se um valor eh menor, igual ou maior a outro valor inserido.\n\n");

    //armazenamento das variáveis

    printf("\n Digite o primeiro numero: ");
    scanf("%f", &X);

    printf("\n Digite o segundo numero: ");
    scanf("%f", &Y);

    //condicional para determinar menor que, igual a, maior que

    if(X > Y) printf("\n %.f eh menor que %.f", Y, X); 
    else if (X == Y) printf("\n %.f eh igual a %.f", Y, X);
    else if (X < Y) printf("\n %.f eh maior que %.f", Y, X);

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