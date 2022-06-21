#include <stdio.h>

int main(){
    float a, prod;
    int b;
    printf("Digite valor de A: ");
    scanf("%f", &a);
    printf("\nDigite valor de B: ");
    scanf("%d", &b);
    for(int i=0;i<b;i++){
        prod = a + prod;
    }
    printf("O produto: %f",prod);
    return 0;
}
