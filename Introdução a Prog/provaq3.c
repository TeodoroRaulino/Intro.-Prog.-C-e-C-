#include <stdio.h>

int main(){
  int x;
  scanf("%d",&x);
  int vet[x], cont=0;

  while(x>0){
    vet[cont] = x%10;
    cont++;
    x= x/10;
  }
  int i=0;
  for(cont=cont-1; cont>=0; cont--){
        switch(vet[cont]){
          case 1:
            if(vet[cont] == 1){
              i +=2;
              break;
            }
          case 2:
            if(vet[cont] == 2){
              i +=5;
              break;
            }
          case 3:
            if(vet[cont] == 3){
              i +=5;
              break;
            }
          case 4:
            if(vet[cont] == 4){
              i +=4;
              break;
            }
          case 5:
            if(vet[cont] == 5){
              i +=5;
              break;
            } 
          case 6:
            if(vet[cont] == 6){
              i +=6;
              break;
            }  
          case 7:
            if(vet[cont] == 7){
              i +=3;
              break;
            }  
          case 8:
            if(vet[cont] == 8){
              i +=7;
              break;
            }  
          case 9:
            if(vet[cont] == 9){
              i +=6;
              break;
            }   
          case 10:
            if(vet[cont] == 0){
              i +=6;
              break;
            }  
        }    
  }
  printf("%d",i);

  return 0;
}