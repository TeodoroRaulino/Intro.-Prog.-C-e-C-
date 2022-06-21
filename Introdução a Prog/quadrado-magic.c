#include <stdio.h>

int main(){

    int matrix[3][3], i, j, princ=0, secun=0, linha=0, coluna=0;
    int contador=0;
    int lin[3]={0,0,0}, col[3]={0,0,0};

    for(i=0; i<3; i++){
     for(j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
            lin[i] += matrix[i][j];
        }   
    }
    for(i=0; i<3; i++){
        princ += matrix[i][i];
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i+j==2){
            secun += matrix[i][j];
            }
        }
    }
    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            col[j] += matrix[i][j];
        }
    }
    for(i = 1; i<3; i++){
      if(lin[i] == lin[i-1]){
        contador++;
      }
      if(col[i] == lin[i-1]){
        contador++;
      }
    }
    for(i = 0; i<3; i++){
        linha += lin[i];
        coluna += col[i];
    }
    linha /= 3;
    coluna /= 3;
    if((linha + coluna + princ + secun)/4 == princ && contador == 4){
    printf("sim\n");
    }else{
    printf("nao\n");
    }

return 0;
}