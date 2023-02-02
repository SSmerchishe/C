#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char* argv[])
{
    int *A = (int *)malloc(1000);
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }
    printf("Enter A [N] array's elements, enter zero(0) to end entry:\n");

    int i = 0;
    while(i < 1000)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        if (A[i] == 0)
        {
            break;
        }
        i++;
    }


    int sum = 0;
    double N = (double)(i);
    while(i)
    {
        sum = sum + A[i-1];
        i--;
    }

    printf("Sum array's elements: %d \n", sum);
    double average_value = sum/N;
    average_value = round(average_value*100)/100.;
    printf("Average value: %lf \n", average_value);

    free(A);
    return 0;
}


