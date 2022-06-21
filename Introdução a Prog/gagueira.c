#include <stdio.h>
#include <ctype.h>

int main()
{
    int num=100;
    char carac[num];
    int i,j, n=0, x=0;
    fgets(carac, 100, stdin);
    setbuf(stdin,NULL);

    for(i=0; i<num; i++){
        if(isspace(carac[i]) || carac[i]=='\n'){
            n = i;
            for(j=x; j<n; j++){
                printf("%c", carac[j]);
            }
            printf(" ");
            for(j=x; j<n; j++){
                printf("%c", carac[j]);
            }
            printf(" ");
            x = n+1;
        }
        if(carac[i]=='\n'){
           num=i;
        }
    }

    return 0;
}