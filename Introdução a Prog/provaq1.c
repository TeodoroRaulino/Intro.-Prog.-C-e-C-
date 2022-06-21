#include <stdio.h>
#include <stdlib.h>

main(){
    int n1,n2,n3,resto,resto2;
    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
              
              
              resto=n3%n2%n1;
              while(resto!=0)
              {
                  n2    = n3;
                  n3    = n1;
                  n1 = resto;
                  resto = n3%n2%n1;         
              }
              
              printf("MDC = %d\n", n1);
    return 0;
}