#include <stdio.h>

int main(){
    float x;
    int y;
    
    scanf("%f",&x);
    
    printf("NOTAS:\n");
    y = x / 100;
    x = x - (y * 100);
    printf("%i nota(s) de R$ 100.00\n", y);
    y = x / 50;
    x = x - (y * 50);
    printf("%i nota(s) de R$ 50.00\n", y);
    y = x / 20;
    x = x - (y * 20);
    printf("%i nota(s) de R$ 20.00\n", y);
    y = x / 10;
    x = x - (y * 10);
    printf("%i nota(s) de R$ 10.00\n", y);
    y = x / 5;
    x = x - (y * 5);
    printf("%i nota(s) de R$ 5.00\n", y);
    y = x / 2;
    x = x - (y * 2);
    printf("%i nota(s) de R$ 2.00\n", y);
    
    printf("MOEDAS:\n");
    y = x / 1;
    x = x - (y * 1);
    printf("%i moeda(s) de R$ 1.00\n", y);
    y = x / 0.50;
    x = x - (y * 0.50);
    printf("%i moeda(s) de R$ 0.50\n", y);
    y = x / 0.25;
    x = x - (y * 0.25);
    printf("%i moeda(s) de R$ 0.25\n", y);
    y = x / 0.10;
    x = x - (y * 0.10);
    printf("%i moeda(s) de R$ 0.10\n", y);
    y = x / 0.05;
    x = x - (y * 0.05);
    printf("%i moeda(s) de R$ 0.05\n", y);
    y = x / 0.01;
    x = x - (y * 0.01);
    printf("%i moeda(s) de R$ 0.01\n", y);
    

    return 0;
}
  