#include <stdio.h> 
#include <math.h> 
#define M_PI  3.141592653589793

int main(){

    /**
     * @author Pedro Teodoro
     * @matricula 761737
     */

    //Limpeza do Terminal
    system("clear||cls");

    /*
    Fazer um programa para:
    - definir e ler um valor real do teclado;
    - supor que esse valor represente o raio de uma esfera,
     calcular e mostrar o volume de uma esfera com cinco oitavos do raio.
    DICA: Usar constantes reais em expressões que envolvam valores reais
    */ 

   //declaração das variáveis

    float Raio; 
    float Volume; 

    //declaração do programa 

    printf("\n Este programa ira calcular o volume de uma esfera com raio igual a 5/8 do valor lido. \n\n");

    //armazenamento da variavel 

    printf("\n\n Digite o tamanho do raio da esfera: ");
    scanf("%f", &Raio);

    //calculo de 5/8 do raio

    Raio = (Raio/8)*5; 
    
    //raio ao cubo

    Raio = Raio*(Raio*Raio);

    //calculo da area do circulo 

    Volume = (4*(M_PI*Raio))/3; 

    //exibição do resultado 

    printf("\n\n O volume da esfera eh igual a %.2f", Volume); 

    //término do programa
    printf("\n\n Fim do programa \n");

    return 0; 
}