#include <stdio.h>

int square(int x);
int main(void){
    int num;
    int ans;

    printf("Please enter the integer.\n");
    scanf("%d", &num);
    ans=square(num);

    printf("The square of %d is %d. \n", num, ans);

    return 0;
}

int square(int x)
{
    return x * x;
}