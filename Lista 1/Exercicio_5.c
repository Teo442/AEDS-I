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
    - definir e ler dois valores reais do teclado;
    - supor que esses dois valores representem base e altura de um triângulo,
     calcular e mostrar a área de um triângulo com um terço da altura do mesmo.
    DICA: Usar constantes reais em expressões que envolvam valores reais.
    */

   //declaração das variáveis 

   float altura; 
   float base;
   float area;  

   //declaração do programa

   printf("\n Esse programa ira calcular e mostrar a area de um triangulo que tenha a altura igual a 1/3 do valor lido \n\n");

   //armazenamento dos valores Altura e Base

   printf("\n Digite o valor inteiro da Altura: "); 
   scanf("%f", &altura);

   printf("\n Digite o valor inteiro da Base: "); 
   scanf("%f", &base);

   //operação para encontrar 1/3 da altura

   altura = altura/3; 

   //operação para obter a area 

   area = (altura*base)/2;

   //exibição do resultado

   printf("\n\n A area eh igual a %.2f", area);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}