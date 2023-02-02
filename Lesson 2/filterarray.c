#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int N, x;
    printf("Enter size of array to create: \t");
    scanf("%d", &N);

    int *A = (int*)malloc(N);
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }
    printf("Enter array's elements: \n");
    for(int i=0; i < N; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    int good_x = 1;
    while(good_x)
    {
        printf("Enter x (not 0) = ");
        scanf("%d", &x);
        if (x != 0)
            good_x = 0;

    }
    int none_of_numbers_flag = 0;
    for(int i=0; i < N; i++)
    {
        if (A[i] == 0)
            continue;
        if (A[i]%x == 0)
        {
            printf("%d ", A[i]);
            none_of_numbers_flag = 1;
        }
    }
    free(A);

    if (none_of_numbers_flag == 0)
        printf("None numbers in array divided by %d", x);

    return 0;
}
