#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{ 
	struct CONTA
	{
		char numero[10];
		float saldo;
	};

	struct CONTA contaAux;
	int opcao = 9;
	char linha[20];
	char saldoString[10];
	float saldoAux = 0;
	char espaco[] = {' '};
	char branco = ' ';
	char *pos;
	int index = 0;
	int i=0;
	int tamanho = 0;
	char numeroAux[10];
	char numeroConta[10];
	char numeroContaDestino[10];
	float valor;
	int contador = 0;
	int resultadoComp = 0;
	int achou = 0;
	int achouDestino = 0;
	FILE *arq;
	FILE *arqTemp;
	
	while(opcao!=0){
		printf("\nDigite 0 para Sair");
		printf("\nDigite 1 para Criar uma Conta");
		printf("\nDigite 2 para Remover uma Conta");
		printf("\nDigite 3 para Efetuar Credito");
		printf("\nDigite 4 para Efetuar Debito");
		printf("\nDigite 5 para Efetuar Trasferencia");
		printf("\nDigite 6 para Consultar Saldo");
		printf("\nEscolha sua opcao:");

		scanf("%d",&opcao);
		getchar();
			
		strcpy(linha,"");
		
		if (opcao==0){
			printf("\nFim do Programa!");
			break;
		}
		else if (opcao==1){	
			printf("\nDigite o Numero da Conta:");
			scanf("%[^\n]", contaAux.numero);
			printf("\nDigite o Saldo da Conta:");
			scanf("%f",&contaAux.saldo);
			getchar();
			
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo!");
				break;
			}
			
			achou = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
			
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
				
					pos = strchr(linha,branco);
					index = pos - linha; 
					strncpy(numeroAux, linha, index);
					
				
					tamanho = strlen(linha);
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
					
					resultadoComp = strcmp(numeroAux,contaAux.numero);
								
					if (resultadoComp==0){
						achou = 1;	
					}
					
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}
			fclose(arq);
			
			if (achou){
				printf("\nConta jÃ¡ existe!!! Tente novamente!");
			}
			else{
				arq = fopen("banco.txt", "a");
				if (arq == NULL){
					printf("\nErro na abertura do arquivo");
					break;
				}
					
				
				strcpy(linha,"");
				strcat(linha,contaAux.numero);
				strcat(linha,espaco);
				sprintf(saldoString, "%.2f", contaAux.saldo);
				strcat(linha,saldoString);
				strcat(linha,"\n");
				fputs(linha,arq);
							
			
				fclose(arq);
				printf("\nConta cadastrada com sucesso!!!");
			}
		}
		else if (opcao==2) {
			printf("\nDigite o Numero da Conta:");
			scanf("%[^\n]", numeroConta);
			getchar();
									
	
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
							
		
			arqTemp = fopen("banco_temp.txt", "w");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
						
		
			rewind(arq);
			achou = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
								
					
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
				
					pos = strchr(linha,branco);
					index = pos - linha; 
					strncpy(numeroAux, linha, index);
				
					tamanho = strlen(linha);
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
				
					resultadoComp = strcmp(numeroAux,numeroConta);
					
					if (resultadoComp!=0){
						fputs(linha,arqTemp);
					}
					else {
						achou = 1;	
					}
								
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}  
			fclose(arq); 
			fclose(arqTemp); 
			
		
			if (achou){
				remove("banco.txt");
				rename("banco_temp.txt","banco.txt");
				printf("\nConta removida com sucesso!!!");
			}
			else{
				printf("\nConta nao encontrada! Tente novamente!");
				remove("banco_temp.txt");
			}
						
		}
		else if (opcao==3) {
			printf("\nDigite o Numero da Conta:");
			scanf("%[^\n]", numeroConta);
			printf("\nDigite o valor a creditar:");
			scanf("%f",&valor);
			getchar();
						
		    
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
				
			
			arqTemp = fopen("banco_temp.txt", "w");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
			
			
			rewind(arq);
			
			achou = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
					
				
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
				
					pos = strchr(linha,branco);
				  	index = pos - linha; 
					strncpy(numeroAux, linha, index);
					
					tamanho = strlen(linha);
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
					
					resultadoComp = strcmp(numeroAux,numeroConta);
					if (resultadoComp==0){
						achou = 1;
						
						strcpy(linha,""); 
						strcat(linha,numeroAux);
						strcat(linha,espaco);
						saldoAux = (float) atoll(saldoString); 
						saldoAux = saldoAux + valor;
						sprintf(saldoString, "%.2f", saldoAux);
						strcat(linha,saldoString);
						strcat(linha,"\n");
					}
					
				
					fputs(linha,arqTemp);
					
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}  
			fclose(arq); 
			fclose(arqTemp); 
			if (achou){
				remove("banco.txt");
				rename("banco_temp.txt","banco.txt");
				printf("\nCredito realizado com sucesso!");
			}
			else {
				printf("\nConta nao encontrada!!! Tente novamente!");
				remove("banco_temp.txt");
			}
			
		}
		else if (opcao==4) {
			printf("\nDigite o Numero da Conta:");
			scanf("%[^\n]", numeroConta);
			printf("\nDigite o valor a debitar:");
			scanf("%f",&valor);
			getchar();
								
		
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
						
		
			arqTemp = fopen("banco_temp.txt", "w");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
					
		
			rewind(arq);
			
			achou = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
							
					
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
					pos = strchr(linha,branco);
					index = pos - linha; 
					strncpy(numeroAux, linha, index);
					tamanho = strlen(linha);
							
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
							
					resultadoComp = strcmp(numeroAux,numeroConta);
					if (resultadoComp==0){
						achou = 1;
						strcpy(linha,"");
						strcat(linha,numeroAux);
						strcat(linha,espaco);
						saldoAux = (float) atoll(saldoString);
						if (valor > saldoAux){
							printf("O valor a debitar eh maior que o saldo da conta! Tente novamente!\n");
							break;
						}	
						saldoAux = saldoAux - valor;
						sprintf(saldoString, "%.2f", saldoAux);
						strcat(linha,saldoString);
						strcat(linha,"\n");
					}
					
				
					fputs(linha,arqTemp);
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}  
			fclose(arq); 
			fclose(arqTemp); 
			if (achou){
				remove("banco.txt");
				rename("banco_temp.txt","banco.txt");
			}
			else{
				printf("\nConta nao encontrada!!! Tente novamente!");
				remove("banco_temp.txt");
			}
			
		}
		else if (opcao==5) {
			printf("\nDigite o Numero da Conta de Origem:");
			scanf("%[^\n]", numeroConta);
			getchar();
			printf("\nDigite o Numero da Conta de Destino:");
			scanf("%[^\n]", numeroContaDestino);
			getchar();
			printf("\nDigite o valor a transferir:");
			scanf("%f",&valor);
			getchar();
			
			
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo!");
				break;
			}
		
			achou = 0;
			achouDestino = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			saldoAux = 0;
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
					
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
					pos = strchr(linha,branco);
					index = pos - linha; 
					strncpy(numeroAux, linha, index);
					tamanho = strlen(linha);
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
					
					resultadoComp = strcmp(numeroAux,numeroConta);
					if (resultadoComp==0){
							achou = 1;	
							saldoAux = (float) atoll(saldoString); 
					}
					
				
					resultadoComp = strcmp(numeroAux,numeroContaDestino);
					if (resultadoComp==0){
						achouDestino = 1;	
					}

								
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}
			fclose(arq);
			if (!achou){
				printf("\nConta de origem nao encontrada!!! Tente novamente!");
			}
			else{
				if (valor > saldoAux){
					printf("O valor a transferir eh maior que o saldo da conta de origem! Tente novamente!\n");
				}
			}
			if (!achouDestino){
				printf("\nConta de destino nao encontrada!!! Tente novamente!");
			}
			
			resultadoComp = strcmp(numeroConta,numeroContaDestino);
			if (!resultadoComp){
				printf("\nA conta de origem eh igual a conta de destino!!! Tente novamente!");
			}
			
			
			if ((achou)&&(achouDestino)&&(saldoAux>valor)&&(resultadoComp)){
				
				arq = fopen("banco.txt", "r");
				if (arq == NULL){
					printf("\nErro na abertura do arquivo");
					break;
				}
			
				arqTemp = fopen("banco_temp.txt", "w");
				if (arq == NULL){
					printf("\nErro na abertura do arquivo");
					break;
				}
											
				rewind(arq);
				
				strcpy(linha,"");
				fgets(linha,50,arq);
				while(!feof(arq)){
					if (ferror(arq)){
						printf("\nErro na leitura da cadeia!!!");
					}
					else {
						
						strcpy(numeroAux,"");
						strcpy(saldoString,"");
						pos = strchr(linha,branco);
						index = pos - linha; 
						strncpy(numeroAux, linha, index);
						tamanho = strlen(linha);
						
						contador = 0;
						for (i=i+1; i<tamanho; i++)
						{
							saldoString[contador] = linha[i];
							contador++;
						}
						
						
						resultadoComp = strcmp(numeroAux,numeroConta);
						if (resultadoComp==0){
							strcpy(linha,"");
							strcat(linha,numeroAux);
							strcat(linha,espaco);
							saldoAux = (float) atoll(saldoString); 
							saldoAux = saldoAux - valor;
							sprintf(saldoString, "%.2f", saldoAux);
							strcat(linha,saldoString);
							strcat(linha,"\n");
						}
					
						resultadoComp = strcmp(numeroAux,numeroContaDestino);
						if (resultadoComp==0){
							strcpy(linha,"");
							strcat(linha,numeroAux);
							strcat(linha,espaco);
							saldoAux = (float) atoll(saldoString); 
							saldoAux = saldoAux + valor;
							sprintf(saldoString, "%.2f", saldoAux);
							strcat(linha,saldoString);
							strcat(linha,"\n");
						}
						
						
						fputs(linha,arqTemp);
					}
					strcpy(linha,"");
					fgets(linha,50,arq);
				}  
				fclose(arq); 
				fclose(arqTemp); 
				remove("banco.txt");
				rename("banco_temp.txt","banco.txt");
				printf("\nTransferencia realizada com sucesso!!!");
			}
			
		}
		else if (opcao==6) {
			printf("\nDigite o Numero da Conta:");
			scanf("%[^\n]", numeroConta);
			getchar();
										
			
			arq = fopen("banco.txt", "r");
			if (arq == NULL){
				printf("\nErro na abertura do arquivo");
				break;
			}
								
	
			rewind(arq);
							
			
			achou = 0;
			strcpy(linha,"");
			fgets(linha,50,arq);
			while(!feof(arq)){
				if (ferror(arq)){
					printf("\nErro na leitura da cadeia!!!");
				}
				else {
									
					
					strcpy(numeroAux,"");
					strcpy(saldoString,"");
					pos = strchr(linha,branco);
					index = pos - linha; 
					strncpy(numeroAux, linha, index);
					
					tamanho = strlen(linha);
									
					contador = 0;
					for ( i=i+1; i<tamanho; i++)
					{
						saldoString[contador] = linha[i];
						contador++;
					}
					
									
					resultadoComp = strcmp(numeroAux,numeroConta);
					if (resultadoComp==0){
						achou = 1;
						printf("O Saldo da Conta %s eh :%s\n", numeroConta, saldoString);
					}
				}
				strcpy(linha,"");
				fgets(linha,50,arq);
			}
			fclose(arq); 
			if (!achou){
				printf("\nConta nao encontrada!!! Tente novamente!");
			}
		}
		else {
			printf("\nOpcao Invalida!");
		}
	}
	
}