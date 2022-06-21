#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int vet[y];
    int cont[y];
    int aux=0;
    for(int i = 0;i<y;i++){
        scanf("%d",&vet[i]);
    }
    for(int i = 0;i<y;i++){
        cont[i] = 0;
    }
    for(int i = 0;i<y;i++){
        for(int j = i; j<y;j++){
         cont[i]+=vet[j];
     }
    }
    for(int i = 0;i<y;i++){
        if(cont[i] == x){
            aux++;
        }
    }
    if(aux!=0){
       printf("S"); 
    }
    else{
        printf("N");
    }

    return 0;
}
