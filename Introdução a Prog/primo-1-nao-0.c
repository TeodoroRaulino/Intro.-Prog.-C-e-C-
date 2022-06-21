#include<stdio.h>
 
int main() {
 int num, cont = 0;
 scanf("%d", &num);
 for(int i = 2;i <= num/2;i++){
    if (num%i == 0){
       cont++;
       break;
    }
 }
 if(cont == 0)
    printf("1");
 else
    printf("0");
 
 return 0;
}