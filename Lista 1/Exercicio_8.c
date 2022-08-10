#include <stdio.h>

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system ("clear||cls");
    
    /*
   Fazer um programa (Exemplo0118) para:
    - definir e ler três valores reais do teclado;
    - supor que esses valores correspondam ao comprimento, à largura e à altura
     de um paralelepípedo, respectivamente,
    calcular e mostrar o volume do sólido com sete vezes esses valores.
    */

   //declaração das variáveis 

   float Comprimento; 
   float Altura; 
   float Largura; 
   float Volume; 

   //declaração do programa

   printf("\n Esse programa ira apresentar o volume de um paralelepípedo com comprimento, altura e largura iguais a 7x os valores lidos \n\n");

   //armazenamento dos valores lidos

   printf("\n\n Digite o valor inteiro da Altura: "); 
   scanf("%f", &Altura);

   printf("\n Digite o valor inteiro do Comprimento: "); 
   scanf("%f", &Comprimento);

   printf("\n Digite o valor inteiro da Largura: "); 
   scanf("%f", &Largura);

   //operação para encontrar 7x os valores

   Altura = Altura*7; 
   Comprimento = Comprimento*7; 
   Largura = Largura*7;

   //operação para obter o volume do sólido

   Volume = (Largura*Altura)*Comprimento; 

   //exibição do resultado

  printf("\n\n O volume do paralelepípedo é de %.2f", Volume);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}