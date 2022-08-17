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
    dizer se o primeiro não está entre os outros dois, quando todos forem diferentes entre si
    */

    //declaração das variáveis

    float a; 
    float b; 
    float c; 

    //declaração do programa 

    printf("\n Esse programa ira ler tres valores reais e dizer quando o primeiro nao esta entre os outros dois.\n");

    //armazenamento das variáveis

    printf("\n Digite o primeiro numero: "); 
    scanf("%f", &a);

    printf("\n Digite o segundo numero: "); 
    scanf("%f", &b);

    printf("\n Digite o terceiro numero: "); 
    scanf("%f", &c);

    //condicional para saber se o primeiro não está entre os demais

    if((a != b) && (b != c)){
        if(((a < c) && (a < b)) || ((a > c) && (a > b))) 
        printf("\n %.2f nao esta entre %.2f e %.2f", a, b, c);
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