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
    - dizer se pertence ao intervalo aberto entre (15:50).
    */

    //declaração das variáveis

    int X; 

    //declaração do programa

    printf("\n Esse programa ira ler um valor inteiro e dizer se esta entre o intervalo (15:50). \n\n");

    //armazenameto da variável 

    printf("\n Digite um valor inteiro: ");
    scanf("%i", &X);

    //condicional para encontro do intervalo 

    if((X >= 15) && (X <= 50)) printf("\n\n %i esta dentro do intervalo (15:50):", X);
    else printf("\n\n %i nao esta dentro do intervalo (15:50)", X);

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