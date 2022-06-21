#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float res;
	for(int i=0; i<=20 ; i++){
		res = pow(2,i);
		printf("%f",res);
	}
	return 0;
}
