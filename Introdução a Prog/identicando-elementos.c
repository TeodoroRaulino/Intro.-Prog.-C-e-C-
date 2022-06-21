#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char carac[100];
    int i, tam=0, m=0, n=0, j=0, flot=0, letra=0, numero=0;
    fgets(carac, 100, stdin);
    tam = strlen(carac);
    
    for(i=m; i<tam; i++){
        if((isspace(carac[i]) && isalnum(carac[i-1])) || carac[i]=='\n'){
            n = i+1; 
            for(j=m; j<n; j++){
                if(carac[j]=='.'){
                    flot++;
                }
                if(isalpha(carac[j])){
                    letra++;
                }
                if(isdigit(carac[j])){
                    numero++;
                }
                if(isspace(carac[j]) && isalnum(carac[j-1])){
                    m = j+1;
                }
                if(carac[j]=='\n' && isalnum(carac[j-1])){
                    n = j;
                    
                }
            }
            
            if((letra>0 && flot==0 && numero==0) || (letra>0 && flot==0 && numero>0) || (letra>0 && flot>0 && numero>0)){
                printf("str ");
            }
            else if(numero>0 && flot==0 && letra==0){
                printf("int ");
            }
            else if(flot>0 && letra==0 && numero>0){
                printf("float ");
            }
            flot=0;
            letra=0;
            numero=0;
        }
    }

    return 0;
}