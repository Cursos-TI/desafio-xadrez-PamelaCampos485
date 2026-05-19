#include <stdio.h>

int main(){
    //variáveis
    int bispo = 1;
    int rainha = 1;

    //Movimento da torre
    printf("*** MOVIMENTO DA TORRE ***\n");

    for(int torre = 1; torre <= 5; torre++){
    //torre repete o movimento 5 vezes
        printf("%d Direita\n", torre);
    }
    //Movimento do bispo
    printf("*** MOVIMENTO DO BISPO ***\n");
    while(bispo <= 5){
    //bispo repete o movimento 5 vezes
        printf("%d Cima Direita\n", bispo);
        bispo++;
    }

    //movimento da rainha
    printf("*** MOVIMENTO DA RAINHA ***\n");
    //rainha repete o movimento 8 vezes
    do{
        printf("%d Esquerda\n", rainha);
        rainha++;
    }while(rainha <= 8);
    //Fim do programa
    return 0;
}
