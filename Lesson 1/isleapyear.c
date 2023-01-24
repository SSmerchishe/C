
#include <stdio.h>

int main(int argc, char* argv[])
{
    int year;
    printf("Enter YEAR numbers:\n");
    scanf("%d", &year);
    if (year < 0) {
        printf("Is not number of year. Try again");
        return 0;
    }

    if (year%400 == 0)
        printf("%d is leap year, man", year);
    else if (year%100 == 0)
        printf("%d is common year, boy", year);
    else if (year%4 == 0)
        printf("%d is leap year, man", year);
    else
        printf("%d is common year, boy", year);


    return 0;
}
