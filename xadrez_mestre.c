#include <stdio.h>

// movimento da torre
void movertorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);
    }

}
// movimento da rainha
void moverrainha(int casas1){
    if(casas1 > 0){
        printf("Esquerda\n");
        moverrainha(casas1 - 1);
    }
}

void moverbispo(int casas2){
    if(casas2 > 0){
        for(int casas = 1; casas <= 1; casas++){
            for(int passos = 1; passos <= 1; passos++){
                printf("Cima, Direita\n");
            }
        }
        moverbispo(casas2 - 1);
    }
}

int main(){

    //Movimento da torre
    printf("*** MOVIMENTO DA TORRE ***\n");
    movertorre(5);
    printf("\n");

    //Movimento do bispo
    printf("*** MOVIMENTO DO BISPO ***\n");
    moverbispo(5);
    printf("\n");


    //movimento da rainha
    printf("*** MOVIMENTO DA RAINHA ***\n");
    moverrainha(8);
    printf("\n");

    //movimento do cavalo
    printf("*** MOVIMENTO DO CAVALO ***\n");

    for(int cavalo = 1; cavalo <= 2; cavalo++){
        int direita = 1;
        printf("Cima\n");
    if( cavalo == 2){
        while(direita <= 1){
            printf("Direita\n");
            direita++;
    }
        }
    }
    //Fim do programa
    return 0;
}
