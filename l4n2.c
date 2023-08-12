#include <stdio.h>

int main(void)
{
    int width;

    printf("Please enter the square length\n");
    scanf("%d",&width);

    printf("The area of the square is %d.\n", width * width);

    return 0;
}