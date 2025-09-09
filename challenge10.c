#include <stdio.h>
#include <string.h>

int main(){

    char str[100], sub[50];
    int i,j;
    printf("Saisir une chaine de caractere : ");
    scanf("%[^\n]",str);
    printf("Saisir une sous-chaine ");
    scanf(" %[^\n]",sub);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==sub[0]){
            for(j=0;sub[j]!='\0';j++){
                if(str[i+j]!=sub[j]){
                    break;
                }
            }
            if(sub[j]=='\0'){
                printf("La sous-chaine ' %s 'trouve dans l'indice %d\n",sub,i+1);
                break;
            }
        }

    }


    return 0;
}
