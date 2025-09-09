#include <stdio.h>
#include <string.h>

int main(){
    char ch[50];
    int i, j = 0;
    printf("Saisir une chaine de caractere : ");
    scanf("%[^\n]",ch);


    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] != ' ') {
            ch[j++] = ch[i];
        }
    }
    ch[j] = '\0';

    printf("Chaine sans espaces : %s\n", ch);

    return 0;
}
