#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct produtos{
	int quant,cod;
	float val;
	char desc[200];
};

int main(){
	struct produtos p[2];
	
	int i=0,j=0,aux=0;
	
	for(i=0;i<2;i++){
		printf("Digite o código do produto:");
		scanf("%d",&p[i].cod);
    setbuf(stdin,NULL);
		for(j=i;j < 2;j++){
			if(p[i].cod > p[j].cod){
        		aux = p[i].cod;
       			p[i].cod = p[j].cod;
        		p[j].cod = aux;
     		 }
        }
		
		printf("Digite a descricao do produto:");
		fgets(p[i].desc,200,stdin);
		setbuf(stdin,NULL);
		
		printf("Digite o valor do produto:");
		scanf("%f",&p[i].val);
    setbuf(stdin,NULL);
		
		printf("Digite a quantidade do produto:");
		scanf("%d",&p[i].quant);
    setbuf(stdin,NULL);
	}

	
	
	return 0;
}
