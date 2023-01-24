#include <stdio.h>

int main(int argc, char* argv[])
{
    int N;
    printf("Enter N:\n");
    scanf("%d", &N);
    int i = 1;
    while(i*i < N)
    {
        printf("%d ", i*i);
        i++;
    }

    return 0;
}

