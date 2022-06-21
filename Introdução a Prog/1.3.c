#include <stdio.h>

int main(){
    float n,resul,media; // número positivo , resultado da soma entre os positivos , média deles
    printf("Digite n: ");
    scanf("%f" ,&n);
    
	if(n > 0){
	    for(int i=0; i<=n ;i++){
	        resul = resul + i;
	    }
	    printf("%f\n",resul);
	}
	else{
	    printf("\nsem inteiros positivos :c");
	}
	media =  resul/n;
	printf("\nValor da media e: %f",media);
	return 0;
}

