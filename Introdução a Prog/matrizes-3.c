#include <stdio.h>

int main(){
    int j,i,matriz[4][4] = {1,9,27,23,34,20,37,47,30,87,55,69,13,60,99,66};
    
    int vet[6],h,g;
    for(h = 0;h < 6;h++){
        scanf("%d",&vet[h]);
        if(matriz[0][0] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[0][1] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[0][2] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[0][3] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[1][0] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[1][1] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[1][2] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[1][3] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[2][0] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[2][1] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[2][2] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[2][3] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[3][0] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[3][1] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[3][2] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        if(matriz[3][3] == vet[h]){
            g = vet[h];
            printf("%d ",g);
        }
        
    }
   
   
   
    return 0;
}

