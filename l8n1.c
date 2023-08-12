#include <stdio.h>

int min(int x, int y);
int main(void){
    int num1, num2;
    int ans;

    printf("Please enter the first integer.\n");
    scanf("%d",&num1);
    printf("Please enter the Second integer.\n");
    scanf("%d",&num2);

    ans = min(num1, num2);

    printf("minimum value is %d.\n", ans);

    return 0;
}

int min(int x, int y){
    if (x<y)
        return x;
    else
        return y;
}