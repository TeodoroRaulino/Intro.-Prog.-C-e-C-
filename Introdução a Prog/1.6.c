#include <stdio.h>

int main(){
    int N,resp = 1;
    printf("Digite um numero: ");
    scanf("%d", &N);
    
    for(int fatorial=N;fatorial>=1;--fatorial){
        resp = resp * fatorial;
    }
    printf("O numero fatorial e: %i\n",resp);
    
}
