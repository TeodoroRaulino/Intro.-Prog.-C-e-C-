#include <stdio.h>
#include <string.h>

int main(){
    int tam=100;
    char carac[tam], conso;
    int soma=0,i, divi, tam3, teste;
    int tam2 = 123;
    scanf("%s", carac);
    for(i=0;i<tam; i++){
        soma +=carac[i];
        if(carac[i]==0){
            tam=0;
        }
    }
    divi = soma%50;
    if(divi!=0){
        conso=0;
        for(i=97; i<tam2; i++){
            teste = soma+i;
            if(teste%50==0){
                conso=i;
                tam2=0;
            }
        }
        if(conso==0){
            printf("sem sorte\n");
        }
        else{
            tam3= strlen(carac);
            for(i=0; i<tam3; i++){
                printf("%c", carac[i]);
            }
            printf("%c", conso);
        }
    }
    else if(divi==0){
        int tam4 = strlen(carac);
        for(i=0; i<tam4; i++){
            printf("%c", carac[i]);
        }
    }

    return 0;
}