#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int N;
    while(1)
    {
        printf("Enter N (4 < N < 10 000): ");
        scanf("%d", &N);
        if (4 < N && N < 10000)
            break;
    }

    int *A = (int *)malloc(N);
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }

    printf("Enter array's elements:\n");
    for (int i=0; i<N; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    int sum_elements = 0;
    for (int i=1; i<N; i++)
    {
        if ((i%3==0)||(i%7==0))
            sum_elements += A[i];
    }
    printf("Result: %d - sum of elements divisible 3 or 7", sum_elements);

    return 0;
}
