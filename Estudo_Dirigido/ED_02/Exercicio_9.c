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
    - ler três valores reais do teclado e 
    dizer se o primeiro está entre os outros dois quando esses forem diferentes entre si.
    OBS.: Notar a ordem dos testes.
    */

    //declaração das variáveis

    float A; 
    float B; 
    float C; 

    //declaração do programa 

    printf("\n Esse codigo ira ler tres valores reais e dizer se o primeiro esta entre o segundo e o terceiro, desde que sejam diferentes entre si. \n\n");

    //armazenamento das variáveis

    printf("\n Digite o primeiro numero: "); 
    scanf("%f", &A);

    printf("\n Digite o primeiro numero: "); 
    scanf("%f", &B);

    printf("\n Digite o primeiro numero: "); 
    scanf("%f", &C);

    //condicional para determinar se o primeiro está entre o segundo e o terceiro

    if(B != C){
        if(((A > C) && (A < B)) || ((A < C) && (A > B))) printf("\n %.2f esta entre %.2f e %.2f", A, B, C);
    }

    //término do programa 

    printf("\n\n Fim do programa\n");

    
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