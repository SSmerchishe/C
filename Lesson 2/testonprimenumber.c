#include <stdio.h>

int testonprime(int a);

int main(int argc, char* argv[])
{
    int a, test;
    printf("Please enter integer (n > 1): \n");
    scanf("%d", &a);

    printf("%d - is ", a);
    test = testonprime(a);
    if (test) printf("PRIME");
    else printf ("NOT prime");
    return 0;
}

int testonprime(int a)
{
    if (a == 2 || a == 3) return 1;
    int primedivider = 2;
    while(primedivider < a)
    {
        if (a%primedivider == 0) return 0;
        primedivider++;
    }
    return 1;
}
