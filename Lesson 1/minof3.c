#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    int min;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        min = b;
    }
    else {
        min = a;
    }


    if (min > c) {
        min = c;
    }

    printf("%d is min of 3 numbers: %d, %d, %d", min, a, b, c);
    return 0;
}
