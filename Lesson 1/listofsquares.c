#include <stdio.h>

int main(int argc, char* argv[])
{
    int Z;
    printf("Enter Z:\n");
    scanf("%d", &Z);
    int i = 1;
    while(Z > i)
    {
        i = i * 2;
    }
    if (Z == i) {
        printf("YES! %d is degree of 2", Z);
    }
    else
        printf("NOT! %d is NOT degree of 2", Z);
    return 0;
}

