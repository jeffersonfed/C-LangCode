#include <stdio.h>

int main(void)
{
    int n;
    int i;
    
    printf("Please enter an integer greater than or equal to 2\n");
    do {
        printf("N=");
        scanf("%d", &n);
    } while (n < 2);

    for (i = 2; i <= n; i++) {
        if (i == n) {
            printf("%d is prime\n", n);
        } else if (n % i == 0) {
            printf("%d is not prime\n", n);
            break;
        }
    }
   
    return 0;
}