#include <stdio.h>

int main(){
  int i,j,aux=0,x;
  scanf("%d",&x);

  int vet[x];
  for(i=0;i<x;i++){
    scanf("%d",&vet[i]);
  }

  for(i=0;i < x;i++){
    for(j=i;j < x;j++){
      if(vet[i] > vet[j]){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  for(i=0;i<x;i++){
    printf("%d ", vet[i]);
  }
  

  return 0;
}