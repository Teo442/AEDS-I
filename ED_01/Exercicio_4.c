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

   int altura; 
   int comprimento;
   int area; 
   int perimetro; 

   //declaração do programa

   printf("\n Esse programa ira calcular e mostrar a area e o perimetro de um quadrado que tenha os lados igual a metade dos valores lidos \n\n");

   //armazenamento dos valores Altura e Comprimento

   printf("\n Digite o valor inteiro da Altura: "); 
   scanf("%i", &altura);

   printf("\n Digite o valor inteiro do Comprimento: "); 
   scanf("%i", &comprimento);

   //operação para encontrar a metade de cada variável 

   altura = altura/2; 
   comprimento = comprimento/2;

   //operação para obter a area e o perimetro

   area = altura*comprimento; 
   perimetro = (altura*2)+(comprimento*2); 

   //exibição do resultado

   printf("\n\n A area eh igual a %i e o perimetro eh igual a %i", area, perimetro);

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