#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int mat[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int a=0,b=0,c=0,d=0,aux=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    aux=c+d;
    printf("%d",&aux);
    mat[a-1][b-1]+=1;
    mat[c-1][d-1]+=1;
    int soma=0,som=0,so=0,s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            soma+=mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n/2;j<n;j++){
            som+=mat[i][j];
        }
    }
    for(int j=0;j<n/2;j++){
        for(int i=0;i<n;i++){
            so+=mat[i][j];
        }
    }
    for(int j=n/2;j<n;j++){
        for(int i=0;i<n;i++){
            s+=mat[i][j];
        }
    }
    if(som==soma){
        printf("S");
    }
    else{
        printf("N");
    }
    return 0;
}
