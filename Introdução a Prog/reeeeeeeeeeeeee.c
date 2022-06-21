#include<stdio.h>

int main(){
    char x,n,z;
    scanf("%c\n",&x);
    scanf("%c\n",&z);
    scanf("%c",&n);
    
    int a,b,c;
        a  = x - 97;
        b = n - 97;
        if(z == '+'){
            c = a + b;
        }
        if(z == '-'){
            c = a - b;
        }
    
        c = c + 97;
        if(c > 122){
            c = c - 26;
        }
        if(c < 97){
            c = c + 26;
        }
    printf("%c",c);
 
    return 0;
}
