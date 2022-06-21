#include <stdio.h>

int main(void) {
  int l,c;
  scanf("%d %d",&l,&c);
  int mat[l][c];
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  int som=0, soma=0;
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i == 0){
        som += mat[i][j];
      }
      if(i == 1){
        soma += mat[i][j];
      }
    }
  }
  if(som == soma){
    printf("SOMA IGUAL");
  }
  else{
    printf("SOMA DESIGUAL");
  }

  return 0;
}