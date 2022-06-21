#include <stdio.h>

int main(void) {
  int l, cont=0;
  scanf("%d ",&l);
  int vet[l];
  if(l == 0){
    printf("Feliz");
    return 0;
  }
  for(int i=0; i<l;i++){
    scanf("%d",&vet[i]);
    if(vet[i] < 0){
      cont++;
    }
  }
  if(cont > 0){
      printf("Nao Feliz");
    }
    else{
      printf("Feliz");
    }
  

  return 0;
}