#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct estilistas{
	int cod;
	float salario;
	char name[100];
};

struct estacoes{
	int cods;
	char nome[100];
};

struct roupas{
	int codr,ano,codes,codest;
	char desc[200];
};

int main(){
	struct estilistas p[5];
	struct estacoes e[4];
	struct roupas r[10];
	
  for(int i=0;i<5;i++){
    printf("Digite o codigo do estilista:");
    scanf("%d",&p[i].cod);
    setbuf(stdin,NULL);
    printf("Digite o nome do estilista:");
    fgets(p[i].name,100,stdin);
    setbuf(stdin,NULL);
    printf("Digite o salario do estilista:");
    scanf("%f",&p[i].salario);
  }

	for(int i=0;i<4;i++){
    printf("Digite o codigo da estacao:");
    scanf("%d",&e[i].cods);
    setbuf(stdin,NULL);
    printf("Digite o nome da estacao:");
    fgets(e[i].nome,100,stdin);
    setbuf(stdin,NULL);
  }
		
  for(int i=0;i<10;i++){
    printf("Digite o codigo da roupa:");
    scanf("%d",&r[i].codr);
    setbuf(stdin,NULL);
    printf("Digite a descriação da roupa:");
    fgets(r[i].desc,200,stdin);
    setbuf(stdin,NULL);
    printf("estilistas disponiveis");
    for(int j=0;j<5;j++){
      printf("%d ",p[j].cod);
      printf("%f ",p[j].salario);
      printf("%s\n",p[j].name);
    }
    printf("digite o codigo do estilista desejado:");
    scanf("%d",&r[i].codes);
    setbuf(stdin,NULL);
    printf("estacoes");
    for(int j=0;j<4;j++){
      printf("%d ",e[j].cods);
      printf("%s\n",e[j].nome);
    }
    printf("digite o codigo da estacao desejada:");
    scanf("%d",&r[i].codest);
    setbuf(stdin,NULL);
    printf("Digite o ano:");
    scanf("%d",&r[i].ano);
    setbuf(stdin,NULL);
  }

  int pesq;
  printf("digite a estacao para ser pesquisada:");
  scanf("%d",&pesq);

  for(int i=0;i<10;i++){
    if(r[i].codest == pesq){
      printf("codigo da roupa: %d ",r[i].codr);
      printf("descricao: %s ",r[i].desc);
      printf("codigo do estilista: %d ",r[i].codes);
      printf("codigo da estacao: %d ",r[i].codest);
      printf("ano da roupa: %d \n",r[i].ano);
    }
  }
	
	return 0;
}

