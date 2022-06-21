#include<stdio.h>


double fib(int n){
    int a=1,b=1,x,i;
    if(n==1) x=a;
    if(n==2) x=b;
    for(i=3;i<=n;i++){
    x=a+b;
    a=b;
    b=x;
}
    return x;
}

int main(){
    int x,n;
    scanf("%d",&n);
    x=fib(n);
    printf("%d",x);
    return 0;
}