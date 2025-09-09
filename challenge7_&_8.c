#include <stdio.h>
#include <string.h>

int main(){
    char c[50];
    printf("Saisir une chaine de caractere en miniscule ou en MAJUSCULE : ");
    scanf("%[^\n]",c);
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-32;
        }else if(c[i]>='A' && c[i]<='Z'){
            c[i]=c[i]+32;
        }
    }
    printf("%s",c);
}