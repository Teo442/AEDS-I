#include <stdio.h> 
#include <math.h> 
#define M_PI  3.141592653589793

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    /*
    Fazer um programa para:
    - definir e ler um valor real do teclado;
    - supor que esse valor informe a área de uma circunferência,
    - calcular e mostrar o raio do triplo dessa área.
    */ 

   //declaração das variáveis

    float raio; 
    float area; 

    //declaração do programa 

    printf("\n Este programa ira calcular o raio de uma circuferencia com base numa area igual ao triplo da area lida \n\n."); 
    
    //armazenamento da variavel 

    printf("\n Digite o valor da area: ");
    scanf("%f", &area);

    //calculo de 3x a area

    area = area*3; 

    //calculo do raio do circulo 
    //a função sqrt serve para calcular a raiz do que estiver entre os parênteses

    raio = (float)sqrt(area/M_PI);

    //exibição do resultado 

    printf("\n\n Com base no triplo da area inserida, o raio eh de %.2f", raio); 

    //término do programa
    printf("\n\n Fim do programa \n");

    return 0; 

    /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 10/08 esboco
    0.2 11/08 versão final 
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}