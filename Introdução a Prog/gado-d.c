#include <stdio.h>

int main(){
  int x;
  scanf("%d",&x);
  int vet[x],cont =0;
  for(int i=0;i<x;i++){
    scanf("%d",&vet[i]);
  }
  if(vet[0] == vet[1] && vet[0]==0){
      cont++;
  }
  for(int i=1;i<x-1;i++){
    if(vet[i] == vet[i+1] && vet[i] == vet[i-1] && vet[i] == 0){
      cont++;
    }
  }
  if(vet[x-1] == vet[x-2] && vet[x-1]==0){
      cont++;
  }
  printf("%d",cont);
  return 0;
}