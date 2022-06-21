#include <stdio.h>

int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  int mat[x][y];
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  for(int j=0;j<y;j++){
    for(int i=0;i<x;i++){
      printf("%d ", mat[i][j]);
    }
  }

  return 0;
}