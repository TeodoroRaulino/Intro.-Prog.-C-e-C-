#include <stdio.h>
int main(){
    char carac[50],chave[50],z;
    int i=0,c=0,w,k=0;
    
    do{
        scanf("%c",&carac[i]);
        i++;
    }while(carac[i-1]!=10);
    do{
        scanf("%c",&chave[c]);
        if(chave[c]!=10){
            chave[c]=chave[c]-97;   
        }
        c++;
    }while(chave[c-1]!=10);
    scanf("%c",&z);
    for(w=0;w<i-1;w++){
        if(carac[w]<123&&carac[w]>96){
            if(z=='+'){
                if(carac[w]+chave[k]<123&&carac[w]+chave[k]>96){
                    carac[w]=carac[w]+chave[k];
                    k++;
                }
                else{
                    carac[w]=carac[w]+chave[k]-26;
                    k++;
                }
            }
            if(z=='-'){
                if(carac[w]-chave[k]<123&&carac[w]-chave[k]>96){
                    carac[w]=carac[w]-chave[k];
                    k++;
                }
                else{
                    carac[w]=carac[w]-chave[k]-26;
                    k++;
                }
            }
        }
        if(k>c-2){
            k=0;
        }
    }
    for(w=0;w<i-1;w++){
        printf("%c",carac[w]);
    }
    return 0;
}