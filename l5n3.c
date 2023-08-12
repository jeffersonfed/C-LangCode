#include <stdio.h>

int main(void){
    int res;

    printf("Please enter the integer from 0 to 10\n");
    scanf("%d", &res);

    if(res >= 0 && res <= 10){
        printf("Correct.\n");
    }else{
        printf("Wrong.\n");
    }
    return 0;
}