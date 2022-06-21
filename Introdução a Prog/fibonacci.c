#include <stdio.h>

int main(){
    int n,k,t=0;
    scanf("%d",&n);
    int i=1;
    int j=0;
    printf("%d ",i);
    for(k=0;k<n-1;k++){
        t = i + j;
        i = j;
        j = t;
            printf("%d ",j);
        j++;
        
    }
    
    return 0;
}
