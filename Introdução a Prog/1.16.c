#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Digite o numero A: ");
    scanf("%i", &a);
    printf("Digite o numero B: ");
    scanf("%i", &b);
    while(a > 0)
    {
        a = a - b ;
    }
    if(a == 0)
    {
        printf("%i", a);
    }
        else if(a < 0)
        {
            printf("%i", a + b);
        }
    return 0;
}