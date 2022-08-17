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
    - supor que esse valor represente o raio de um círculo,
    calcular e mostrar a área de um círculo com um quarto do raio.
    DICA: Na biblioteca <math.h> há definição da constante equivalente a PI (M_PI).
    */ 

   //declaração das variáveis

    float raio; 
    float area; 

    //declaração do programa 

    printf("\n Este programa ira calcular a area de um circulo com raio igual a 1/4 do valor inserido. \n\n"); 
    
    //armazenamento da variavel 

    printf("\n Digite o tamanho do raio do circulo: ");
    scanf("%f", &raio);

    //calculo de 4x o raio

    raio = raio/4; 

    //calculo da area do circulo 

    area = M_PI*(raio*raio); 

    //exibição do resultado 

    printf("\n\n A area do circulo com raio igual a %.2f eh de %.2f", raio, area); 

    //término do programa
    printf("\n\n Fim do programa \n");

    return 0; 

    /*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes / comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao Data Modificacao
    0.1 08/08 esboco
    0.2 08/08 versão final 
    ---------------------------------------------- testes
    Versao Teste
    0.1 01. ( OK ) identificacao de programa
    */
}