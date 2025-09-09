#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[50]="";
    printf("Saisir le premier chaine : ");
    gets(c);
    for(int i=strlen(c);i>=0;i--){
        printf("%c",c[i]);
    }


    return 0;
}
