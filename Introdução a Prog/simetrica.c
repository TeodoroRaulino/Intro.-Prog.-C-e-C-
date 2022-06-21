#include <stdio.h>

int main(){
  int x,i,j,vet[3][3], cont=0; 
  for(i=0;i < 3;i++){
    for(j=0;j < 3;j++){
      scanf("%d",&vet[i][j]);
    }
  }
  for(i=0;i < 3;i++){
    for(j=0;j < 3;j++){
      if(vet[i][j]==vet[j][i]){
        cont++;
      }
    }
  }
  if(cont == 9){
    printf("sim");
  }
  else{
    printf("nao");
  }
 