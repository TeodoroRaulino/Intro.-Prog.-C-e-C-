#include <stdio.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);
    char frase[50][51];
    char n1[50][51], n2[50][51];
    int cont1=0, cont2=0;
    for(int i=0; i<a; i++){
        scanf("%s", frase[i]);
        setbuf(stdin, NULL);
        for(int j=0; j<strlen(frase[i])+1; j++){
            if(frase[i][j]=='a'||frase[i][j]=='e'||frase[i][j]=='i'||frase[i][j]=='o'||frase[i][j]=='u'){
                n1[i][cont1] = frase[i][j];
                cont1++;
            }   
            else if(frase[i][j]!='a'||frase[i][j]!='e'||frase[i][j]!='i'||frase[i][j]!='o'||frase[i][j]!='u' && cont1!=0){
                if(cont1>cont2){
                    cont2 = cont1;
                    strcpy(n2[i],n1[i]);
                }  
                cont1=0;
                strcpy(n1[i], "1");
            }
        }
        cont2=0;
    }
    for(int i=0; i<a; i++){
        printf("%s\n", n2[i]);
    }
    return 0;
}