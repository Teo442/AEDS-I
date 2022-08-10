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

    printf("\n Este programa ira calcular a area de um circulo com raio igual a 4x o valor inserido. \n\n"); 
    
    //armazenamento da variavel 

    printf("\n Digite o tamanho do raio do circulo: ");
    scanf("%f", &raio);

    //calculo de 4x o raio

    raio = raio*4; 

    //calculo da area do circulo 

    area = M_PI*(raio*raio); 

    //exibição do resultado 

    printf("\n\n A area do circulo com raio igual a %.2f eh de %.2f", raio, area); 

    //término do programa
    printf("\n\n Fim do programa \n");

    return 0; 
}