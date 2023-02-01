#include <stdio.h>

int gcd(int a, int b);

int main(int argc, char* argv[])
{
    int a, b, result;
    printf("Please enter two integers (n, m > 0) (through the spacebar): \n");
    scanf("%d %d", &a, &b);

    printf("GCD(%d, %d) = ", a, b);
    result = gcd(a, b);
    printf("%d", result);

    return 0;
}

int gcd(int a, int b)
{
    if (b == 0) return a;

    if (a < b) {
        int temp_a = a;
        a = b;
        b = temp_a;
    }
    return gcd(b, a%b);;
}
