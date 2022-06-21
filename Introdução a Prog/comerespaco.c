#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char carac[100];
  fgets(carac,100,stdin);
  setbuf(stdin,NULL);
  for(int i=0;i<strlen(carac)-1;i++){
    if(carac[i] == ' ' && carac[i+1] == ' '){
      carac[i] = '0';
    }
    if(carac[i] != '0')
    printf("%c", carac[i]);
  }
  return 0;
}