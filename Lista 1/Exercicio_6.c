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

   float Lado; 
   float Altura; 
   float Area; 
   float Perimetro; 

   //declaração do programa

   printf("\n Esse programa irá apresentar a altura, area e perimetro de um triangulo equilatero com lado equivalente ao dobro do valor lido \n\n");

   //armazenamento do valor Lado

   printf("\n Digite o valor inteiro do Lado: "); 
   scanf("%f", &Lado);

   //operação para encontrar o dobro do lado

   Lado = Lado*2; 

   //operação para obter a area, altura e perimetro
   // considerando raiz de 3 = 1,7

   Area = (1.7*(Lado*Lado))/4; 
   Perimetro = Lado*3; 
   Altura = (Lado*1.7)/2; 

   //exibição do resultado

   printf("\n\n A area eh igual a %.2f, o perimetro igual a %.2f e a altura igual a %.2f", Area, Perimetro, Altura);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}