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
    - dizer se pertence ao intervalo fechado entre [25:40].
    */

    //declaração das variáveis

     int X; 

    //declaração do programa 

    printf("\n Esse programa ira dizer se um numero esta entre o intervalo [25:40]\n\n");

    //armazenamento da variável 

    printf("\n Digite um valor inteiro: ");
    scanf("%i", &X);

    //condicional para encontro do numero dentro ou fora do intervalo 

    if((X > 25) && (X < 40)) printf("\n %i esta dentro do intervalo [25:40]:", X);
    else printf("\n %i nao esta dentro do intervalo [25:40]", X);

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