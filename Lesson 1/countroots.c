#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    printf("Enter a, b, c numbers in ax^2+bx+c=0:\n");
    scanf("%d%d%d", &a, &b, &c);

    double D;
    D = b*b - 4*a*c;
    if (D > 0) {
        printf("2 roots in %dx^2+%dx+%d=0", a, b, c);
    }
    else if (D == 0) {
        printf("1 root in %dx^2+%dx+%d=0", a, b, c);
    }
    else {
        printf("No roots in %dx^2+%dx+%d=0", a, b, c);
    }
    return 0;
}

