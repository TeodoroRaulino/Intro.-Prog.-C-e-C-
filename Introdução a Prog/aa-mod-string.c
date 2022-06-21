#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int tam;
  char carac[100];
  fgets(carac,100,stdin);
  setbuf(stdin,NULL);
  tam = strlen(carac)-1;
  int i;

  
  for(i = 0; i<tam; i++){
    if(carac[i]>64 && carac[i]<91)
    carac[i] = tolower(carac[i]);
    else if(carac[i]>96 && carac[i]<123)
         carac[i] = toupper(carac[i]); 
  }
  
  
  for(i = 0; i<tam; i++){
    printf("%c", carac[i]);
  }

  return 0;
}