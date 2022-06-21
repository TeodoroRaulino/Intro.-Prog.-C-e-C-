#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
  char carac[100];
  fgets(carac,100,stdin);
  setbuf(stdin,NULL);
  
  for(int i=0;i<strlen(carac)-1;i++){
      if(carac[i-1]==toupper(carac[i-1]) && carac[i-1]!= isspace(carac[i-1])){
        carac[i] = tolower(carac[i]);
      }
      else{
        carac[i] = toupper(carac[i]); 
      }
    printf("%c", carac[i]);
  }

  return 0;
}