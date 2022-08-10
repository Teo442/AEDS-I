#include <stdio.h>
#include <math.h>

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
    - supor que esse valor represente o lado de um triângulo equilátero,
    calcular e mostrar a altura, área e o perímetro do triângulo com o dobro do lado.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração das variáveis 

   float lado; 
   float altura; 
   float area; 
   float perimetro; 

   //declaração do programa

   printf("\n Esse programa irá apresentar a altura, area e perimetro de um triangulo equilatero com lado equivalente ao dobro do valor lido \n\n");

   //armazenamento do valor Lado

   printf("\n Digite o valor inteiro do Lado: "); 
   scanf("%f", &lado);

   //operação para encontrar o dobro do lado

   lado = lado*2; 

   //operação para obter a area, altura e perimetro
   // considerando raiz de 3 = 1,7

   area = (1.7*(lado*lado))/4; 
   perimetro = lado*3; 
   altura = (lado*1.7)/2; 

   //exibição do resultado

   printf("\n\n A area eh igual a %.2f, o perimetro igual a %.2f e a altura igual a %.2f", area, perimetro, altura);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}