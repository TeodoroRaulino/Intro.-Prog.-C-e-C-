#include <stdio.h>

int main(){
    int n,i,h;
    scanf("%d",&n);
    int x[n];
    for(i=n;i>0;i--){
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++){
        printf("N[%d] = %d\n",i,x[i]);
    }
    
    return 0;
}