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
    calcular e mostrar a área e o perímetro de um quadrado com o dobro do tamanho do lado.
    */

   //declaração das variáveis 

   int lado;  
   int area; 
   int perimetro; 

   //declaração do programa

   printf("\n Esse programa ira calcular e mostrar a area e o perimetro de um quadrado que tenha o lado igual ao dobro do tamanho da variavel x \n\n");

   //armazenamento do valor Lado

   printf("\n Digite o valor inteiro do Lado: "); 
   scanf("%i", &lado);

   //operação para dobrar o lado 

   lado = lado*2; 

   //operação para obter a area e o perimetro

   area = lado*lado; 
   perimetro = lado*4; 

   //exibição do resultado

   printf("\n\n A area eh igual a %i e o perimetro eh igual a %i", area, perimetro);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}