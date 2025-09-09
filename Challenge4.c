#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[50]="";
    char f[50]="";
    printf("Saisir le premier chaine : ");
    gets(c);
    printf("Saisir le deuxieme chaine : ");
    gets(f);
    if(strcmp(c,f)==0){
        printf("Les deux chaines egaux ");
    }else{
    printf("%s & %s deux chaines defirent",c,f);
    }

    return 0;
}