#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    int a = x;
    if(a >= 97 && a <= 122){
        a  = a - 32;
    }else if(a>=65 && a<=90){
        a = a + 32;
    }
    printf("%c",a);
 
    return 0;
}