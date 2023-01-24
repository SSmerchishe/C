#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("%d more than %d", a, b);
    else if (a < b)
        printf("%d more than %d", b, a);
    else
        printf("They are equal, man");

    return 0;
}
