#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
	float res;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++){
		res = pow(2,i);
		printf("%f",res);
	}
	return 0;
}

