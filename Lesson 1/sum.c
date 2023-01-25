#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, sum;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("%d + %d = %d <<<< look man", a, b, sum);
    return 0;
}
