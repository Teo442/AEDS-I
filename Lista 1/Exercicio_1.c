#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");

    
    /*
     Fazer um programa para:
    - definir e ler um valor inteiro do teclado;
    - supor que esse valor represente o lado de um quadrado,
    - calcular e mostrar um sexto da área do mesmo.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração de variáveis

   int lado; 
   float area; 
   float fracaoArea;

   //declaração do programa

   printf("\n Este programa ira calcular 1/6 da area de um quadrado de lado X \n\n"); 

   //armazenamento do valor Lado

   printf("\n Digite o valor inteiro do lado: "); 
   scanf("%i", &lado); 

   //calculo da área do quadrado

   area = lado*lado; 

   //calculo de 1/6 da área

   fracaoArea = (area/6); 

   //exibição do resultado

   printf("\n\n Para um quadrado de lado %i, 1/6 da sua area eh igual a %.2f", lado, fracaoArea);

   //término do programa 

   printf("\n\n Fim do programa \n"); 

   return 0;
}