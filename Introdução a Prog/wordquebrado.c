#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int tam;
  char carac[100], form;
  fgets(carac,100,stdin);
  setbuf(stdin,NULL);
  scanf("%c", &form);
  tam = strlen(carac)-1;
  int i;

  if(form == 'M'){
    for(i = 0; i<tam; i++){
      carac[i] = toupper(carac[i]);
    }
  }
  else if(form == 'm'){
    for(i = 0; i<tam; i++){
      carac[i] = tolower(carac[i]);
    }
  }
  else if(form == 'p'){
    if(carac[2]!=' ')
      carac[i] = toupper(carac[i]);
    for(i = 0; i<tam; i++){
      if(carac[i]==' ' && carac[i+2]!=' ')
      {
        carac[i+1] = toupper(carac[i+1]);
      }
      if(carac[i] == ' ' && carac[i+2] == ' '){
        carac[i+1] = tolower(carac[i+1]);
      }
      if(carac[0]){
        carac[0] = tolower(carac[0]);
      }

    }
  }

  else if(form == 'i'){
    for(i = 0; i<tam; i++){
      if(carac[i]>64 && carac[i]<91)
        carac[i] = tolower(carac[i]);
      else if(carac[i]>96 && carac[i]<123)
         carac[i] = toupper(carac[i]); 
    }
  }
  for(i = 0; i<tam; i++){
    printf("%c", carac[i]);
  }

  return 0;
}