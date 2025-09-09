#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[50];
    char d[50];
    printf("Saisir le premier chaine : ");
    gets(c);
    printf("Saisir le deuxieme chaine : ");
    gets(d);
    printf("%s %s",c,d);

    return 0;
}
