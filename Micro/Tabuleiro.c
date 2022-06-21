#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 //int i, j;
 int matriz[4][8] = {{ 1, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 }};

int cont = 1;  
int aux = 0;
  
int dado = 15;


while(dado > 0){
  for(int i = 0; i < 4 && dado != 0; i++){
    for(int j = 0; j < 8 && dado != 0; j++){
    //print    
      for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
          printf("%d ", matriz[i][j]);
        }
        printf("\n");
      }
      if(matriz[i][j] == 1 && j != 7){
        //printf("teste\n");
        aux = matriz[i][cont];
        matriz[i][cont] = matriz[i][j];
        matriz[i][j] = aux;
        dado = dado - 1;
        cont++;
      }
      else if(j == 7){
        if(i != 3){
          aux = matriz[i + 1][0];
          matriz[i + 1][0] = matriz[i][j];
          matriz[i][j] = aux;
        }
      }
      
      
      
      
    short int collumn = j;
    short int line = i;
    short unsigned int flag1 = 0;
    short unsigned int flag2 = 0;
    
    int Tabits[6] = {0,0,0,0,0,0};
    
    /// LINHA
    switch(line){
        case 0:
            Tabits[0] = 0;
            Tabits[1] = 0; 
        break;   
        
        case 1:
            Tabits[0] = 1;
            Tabits[1] = 0;
        break;   
        
        case 2:
            Tabits[0] = 0;
            Tabits[1] = 1;
        break;
        
        case 3:
            Tabits[0] = 1;
            Tabits[1] = 1;
        break;   
        
        default:
        break;   
    }  
  
    ////COLUNA
    
    if(collumn <= 3){
        flag1 = 0;
        flag2 = 1;
    }
   
    else{
        flag1 = 1;
        flag2 = 0;
    }
    
    Tabits[2] = flag1;
    Tabits[3] = flag2;
    
    switch(collumn){
        case 0:
            Tabits[4] = 0;
            Tabits[5] = 0; 
        break;   
        
        case 1:
            Tabits[4] = 1;
            Tabits[5] = 0;
        break;   
        
        case 2:
            Tabits[4] = 0;
            Tabits[5] = 1;
        break;
        
        case 3:
            Tabits[4] = 1;
            Tabits[5] = 1;
        break;
        
        case 4:
            Tabits[4] = 0;
            Tabits[5] = 0; 
        break; 
        
        case 5:
            Tabits[4] = 1;
            Tabits[5] = 0;
        break; 
        
        case 6:
            Tabits[4] = 0;
            Tabits[5] = 1;
        break;
        
        case 7:
            Tabits[4] = 1;
            Tabits[5] = 1;
        break; 
        
        
        default:
        break;   
    }
    
    int j = 0;
    for(j = 0; j < 6;j++){
        printf("%i", Tabits[j]);
    }
    printf("\n");
      
   
    }
    aux = 0;
    cont = 1;
  }

}
  
 
  
 return 0;
}