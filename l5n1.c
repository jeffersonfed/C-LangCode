#include <stdio.h>

int main(void){
    int res;

    printf("Please enter the integer.\n");
    scanf("%d", &res);

    if((res % 2) == 0)
        printf("%d is even number.\n", res);
    else
        printf("%d is odd number.\n", res);

    return 0;
}