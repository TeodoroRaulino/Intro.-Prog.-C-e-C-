#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char carac[100], letra;
    int i,j, tam, cont=0, cont2=0, cont3=0; 
    scanf("%c", &letra);
    scanf("%s", carac);
    tam = strlen(carac);
    for(i=0; i<tam; i++){
        if(carac[i]==letra){
            carac[i] = '@';
            cont3++;
        }
        if(carac[i]=='0'){
            cont++;
        }
        if(cont==(tam-1)){
            for(j=0; j<tam; j++){
                carac[j] = '@';
                cont2++;
            }
        }
    }
    for(i=0; i<tam; i++){
        if(carac[i]!='@'){
            printf("%c", carac[i]);
        }
    }
    if(cont2==tam){
        printf("0");
    }
    if(cont3==tam){
        printf("0");
    }
    

    return 0;
}