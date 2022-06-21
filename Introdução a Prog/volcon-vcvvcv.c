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
    if(carac[i] == 'a' || carac[i] == 'e' || carac[i] == 'i' || carac[i] == 'o' || carac[i] == 'u' || carac[i] == 'A' || carac[i] == 'I' || carac[i] == 'O' || carac[i] == 'U' || carac[i] == 'E')
    printf("v");
    else if(carac[i] == ' ')
      printf(" ");
    else
     printf("c"); 
  }
  

  return 0;
}