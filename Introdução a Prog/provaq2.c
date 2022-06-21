#include <stdio.h>

int main(void) {
  int x;
  scanf("%d",&x);
  int i=2,mut=1;
  while(x >mut){
    mut *= i;
    i+=1;
  }
  if(x == mut){
    printf("O numero %d eh triangular", x);
  }
  else{
    printf("O numero %d nao eh triangular",x);
  }
  
  return 0;
}