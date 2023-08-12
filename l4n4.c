#include <stdio.h>

int main(void)
{
    int num;
    printf("Please enter the integer.\n");
    scanf("%d", &num);

    printf("Result of the invert positive/negative is %d.\n", -num);

    return 0;
}