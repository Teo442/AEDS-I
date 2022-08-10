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
    - definir e ler dois valores inteiros do teclado;
    - supor que esses dois valores representem lados de um retângulo,
    calcular e mostrar um quarto da área do mesmo.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração das variáveis 

   int altura; 
   int comprimento; 
   int area; 
   float fracaoArea; 

   //declaração do programa

   printf("\n Esse programa ira mostrar 1/4 do valor da area de um retangulo com lados X e Y \n\n");

   //armazenamento dos valores Altura e Comprimento

   printf("\n Digite o valor inteiro da altura: "); 
   scanf("%i", &altura);

   printf("\n Digite o valor inteiro do comprimento: "); 
   scanf("%i", &comprimento);

   //operação para descobrir a area

   area = altura*comprimento; 

   //operação para obter 1/4 da area

   fracaoArea = (area/4); 

   //exibição do resultado

   printf("\n\n Para um retangulo de lados %i e %i, 1/4 da sua area eh igual a %.2f", altura, comprimento, fracaoArea);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}