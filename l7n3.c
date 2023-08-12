#include <stdio.h>

int main(void){
    char str[100];
    int i , c;

    c=0;

    printf("Please enter a string.\n");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++){
        c++;
    }
    printf("the length of the string is %d .\n", c);
    return 0;
}