#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal 
    system("clear||cls"); 

    /*
    ) Incluir um procedimento para:
    - ler um valor inteiro do teclado e 
    - dizer se pertence aos intervalos fechados [15:30] ou [25:40], ou a apenas a um deles.
    */

    //declaração das variáveis

    int X; 

    //declaração do programa 

    printf("\n Esse programa ira determinar se um numero pertence a um dos intervalos [15:30] ou [25:40] ou [25:40], ou a ambos \n\n");

    //armazenamento da variável

    printf("\n Digite um numero inteiro: "); 
    scanf("%i", &X); 

    //condicional para verificar onde a variável se encontra 

    if((X > 25) && (X < 30)) printf("\n Pertence a ambos os intervalos");
    else if((X > 25) && (X < 40)) printf("\n Pertence a [25:40]");
    else if((X > 15) && (X < 30)) printf("\n Pertence a [15:30]");

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