#include <stdio.h>
#include <math.h>


int main(){
    int matriz[5][5];
    int i,j;
    int s=1,sm=0,sn=0,sub;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(i=0;i<5;i++){
        sm = (sm + matriz[i][i]);
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i + j == 4){
                sn = (sn + matriz[i][j]);
            }
        }
    }
    
    sub = sm - sn;
    printf("%d",sub);
    return 0;
}
