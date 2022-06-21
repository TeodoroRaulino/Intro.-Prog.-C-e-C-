#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vet[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    int maior =0;
    for(int i=0;i<n;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    int cont=0;
    for(int i=0;i<n;i++){
        if(vet[i] >= maior){
            cont++;
        }
    }
    
    if(cont == 1){
        printf("N");
    }
    else{
        printf("S");
    }

    return 0;
}
