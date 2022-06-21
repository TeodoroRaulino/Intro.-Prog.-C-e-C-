#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  int num,cont[8],tam=0;
  scanf("%d",&num);
  char carac[100];
  fgets(carac,100,stdin);
  setbuf(stdin,NULL);
  for(int i=0;i<num;i++){
     scanf("%s", carac);
        tam = strlen(carac);
        cont[i]=0;
    for(int j=0;j<tam;j++){
      switch(carac[j]){
        case'1':{
                    cont[i] = cont[i]+2;
                    break;
                }
                case'2':{
                    cont[i] = cont[i] +5;
                    break;
                }
                case'3':{
                    cont[i] = cont[i] +5;
                    break;
                }
                case'4':{
                    cont[i] = cont[i]+4;
                    break;
                }
                case'5':{
                    cont[i] = cont[i] +5;
                    break;
                }
                case'6':{
                    cont[i] = cont[i]+6;
                    break;
                }
                case'7':{
                    cont[i] = cont[i] +3;
                    break;
                }
                case'8':{
                    cont[i] = cont[i] +7;
                    break;
                }
                case'9':{
                    cont[i] = cont[i]+6;
                    break;
                }
                case'0':{
                    cont[i] = cont[i]+6;
                    break;
                }
                
            }
        }
          printf("%d leds\n",cont[i]);
      }
      

  return 0;
}