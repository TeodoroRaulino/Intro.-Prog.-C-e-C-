#include <stdio.h>
#include <stdlib.h>

struct ibge{
		float salario;
		int idade, filhos;
		char sexo;
	};
	
int main(){
	
	
	struct ibge p[20];
	int i,cont=0,con=0;
	float a=0, b=0, som_s=0, som_f=0, maior=0, d=0;
	
	for(i=0;i<20;i++){
    printf("Escrava o seu salario: ");
		scanf("%f",&p[i].salario);
		som_s = som_s + p[i].salario;
    if(maior < p[i].salario){
      maior = p[i].salario;
    }

    printf("Escrava o número de filhos: ");
		scanf("%d",&p[i].filhos);
		som_f = som_f + p[i].filhos;

    printf("Escrava sua idade: ");
    scanf("%d",&p[i].idade);

    printf("Escreva seu sexo: (m/f)");
    getchar();
    scanf("%c",&p[i].sexo);
    if(p[i].sexo == 'f'){
      cont++;
      if(p[i].salario > 10000){
        con++;
      }
    }
    }
	a = som_s/20;
	printf("\nA media do salario eh: %0.2f\n",a);
  b = som_f/20;
  printf("A media de filhos eh: %0.1f\n",b);
  printf("O maior salario eh: %0.2f\n",maior);
  d = (con*100)/cont;
  printf("O percentual de mulheres com salario superior 10000 eh: %0.2f %",d);



	return 0;
}