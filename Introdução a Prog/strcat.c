#include <stdio.h>

int main(){
    char palavra[20];
    char palavrab[20];
    scanf("%s",palavra);
    scanf("%s",palavrab);
    
    strcat(palavra,palavrab);
    printf("%s",palavra);

    return 0;
}
