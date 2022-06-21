#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam,k=0;
    scanf("%d", &tam);
    int r, q, som=0, cont=0,i, vet[tam];
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
    }
    for(i=0;i<tam;i++){
        som = som+vet[i];
    }
    for(i=tam-1;i>-1;i--){
        if(som%8==0){
            cont++;
        }
        som = som-vet[i];
        if(som%8==0){
            cont++;
        }
        som = som-vet[k];
        if(som%8==0){
            cont++;
        }
        k++;
    }
    if(cont==1){
        cont = cont-1;
    }
    if(cont==4){
        cont = cont-2;
    }
    printf("%d", cont);
    
    return 0;
}