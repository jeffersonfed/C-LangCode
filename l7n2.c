#include <stdio.h>
#define NUM 5

int main(void)
{
    int test[NUM]; 
    int num;
    int i, j;
   
    num=0;

    printf("Please enter your test score.\n");
    for(i=0; i<NUM; i++){
        scanf("%d", &test[i]);

        if(test[i] >= 70){
            num++;
        }
    }
    for(j=0; j<NUM; j++){
        printf("the score of the %d is %d.\n", j+1, test[j]);
    }
    printf("Students with a score of 70 or above is %d people.\n", num);

    return 0;
}