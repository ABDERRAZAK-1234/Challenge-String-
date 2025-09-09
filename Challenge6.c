#include <stdio.h>
#include <string.h>

int main()
{
    char c[50];
    char f;
    int element=0;
    printf("Saisir une chaine : ");
    gets(c);
    printf("Saisir une caractere : ");
    scanf(" %c", &f);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==f){
            element++;
        }
}
    printf("le caractere '%c' est : %d fois\n",f,element);

    return 0;
}


