#include <stdio.h>

int main() {

    int cont, produto, parada, resultado;
    printf("Digite um numero para fazer o produto: ");
    scanf("%d",&cont);
    
    produto = cont;
    
    do{
        resultado = produto * cont;
        scanf("%d",&resultado);
        produto = resultado;
        printf("\n Deseja parar ? (1 para sim e 2 para nao");
        scanf("%d", &parada);
    }while (parada == 2);


   return 0;
}