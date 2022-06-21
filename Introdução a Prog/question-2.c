#include <stdio.h>

int main(){
    int mat[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    if(mat[i][j] != mat[j][i]){
        printf("nao");
        return 0;
    }
    if(mat[i][j] == mat[j][i]){
        printf("sim");
    }
    
    return 0;
}
