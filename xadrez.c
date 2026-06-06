#include <stdio.h>

int main(){


//DEFINIÇÃO  PARA O NUMERO DE CASAS QUE CADA PECA DEVE MOVER

int casastorre = 5;
int casasbispo = 5;
int casasrainha = 8;

// MOVIMENTAÇÃO TORRE USANDO "FOR"
 // criar (int sempre antes para direcionar o codigo)
for (int i = 1; i <= casastorre; i++)
{
    printf("Direita\n");
}



//MOVIMENTAÇÃO BISPO USANDO "WHILE"
 // criar (int sempre antes para direcionar o codigo)
int contadorbispo = 1;

while (contadorbispo <= casasbispo)
{
   printf("Cima Direita\n");

   contadorbispo++; //INCREMENTO DE PARADA

}



    //MOVIMENTAÇÃO DA RAINHA EM "DO-WHILE"
    // criar (int sempre antes para direcionar o codigo)
        int contadorrainha = 1;

    do
    {
        printf("Esquerda\n");
        contadorrainha++;
    } while (contadorrainha <= casasrainha);
    





    return 0;

}
