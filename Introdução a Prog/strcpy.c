#include <stdio.h>

int main(){
    char palavra[20] = "Bolo de arroz";
    char NovaPalavra[30];
    
    strcpy(NovaPalavra,palavra);
    
    printf("%s",NovaPalavra);

    return 0;
}
