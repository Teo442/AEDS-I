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
    calcular e mostrar a área e o perímetro de um retângulo com a metade do tamanho dos lados
    */

   //declaração das variáveis 

   int Altura; 
   int Comprimento;
   int Area; 
   int Perimetro; 

   //declaração do programa

   printf("\n Esse programa ira calcular e mostrar a area e o perimetro de um quadrado que tenha os lados igual a metade dos valores lidos \n\n");

   //armazenamento dos valores Altura e Comprimento

   printf("\n Digite o valor inteiro da Altura: "); 
   scanf("%i", &Altura);

   printf("\n Digite o valor inteiro do Comprimento: "); 
   scanf("%i", &Comprimento);

   //operação para encontrar a metade de cada variável 

   Altura = Altura/2; 
   Comprimento = Comprimento/2;

   //operação para obter a area e o perimetro

   Area = Altura*Comprimento; 
   Perimetro = (Altura*2)+(Comprimento*2); 

   //exibição do resultado

   printf("\n\n A area eh igual a %i e o perimetro eh igual a %i", Area, Perimetro);

   //término do programa
   
   printf("\n\n Fim do programa \n"); 

   return 0;
}