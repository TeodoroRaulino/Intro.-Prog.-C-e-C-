#include <stdio.h>

int main(){
    float aquiles,tartaruga,voltart,disaq,distart;// velocidade de aquiles , velocidade da tartaruga , volta da tartaruga , distância de aquiles , distância da tartaruga.
    float tempo = 0;
    aquiles = 10;
    tartaruga = 1;
    voltart = 100;
    distart = ( tartaruga * tempo) + voltart;
    disaq = aquiles * tempo;
    do{
        distart = distart + (tartaruga * tempo);
        disaq = disaq + (aquiles * tempo);
        tempo = tempo + 0.1;
    }while(distart > disaq);
    
    printf("O tempo que aquiles ultrapassará a tartaruga é ; %f",tempo);

    return 0;
}

