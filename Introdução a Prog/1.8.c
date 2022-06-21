#include <stdio.h>

int main(){
    int erro = 1;
    for(int i=2;i<=26;i++){
        erro = erro * 2;
    }
    
    printf("Quantidade de erros no programa final: %d\n",erro);

    return 0;
}
