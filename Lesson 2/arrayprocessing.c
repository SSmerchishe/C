/*
������������������ ������� �� ����������� ����� � ����������� ������ 0. ���������� �������� ����������� �������� ������������������.
���������� �������� ����������� ������� �������� ������������������.
����������, ������� ��������� ���� ������������������ ����� �� ����������� ��������.

������ ������� ������
�������� ������������������ ����� �����, �������������� ������ 0 (���� ����� 0 � ������������������ �� ������).

������ �������� ������
�������� ����� �� ������ (���� �����).
���� ����� � ������������ ������ ����� � ������������������, ���� ������ ����� � ��� ������������, ����� - 0.
�������� ����� �� ������ (���� �����).
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n = 100;
    int *A = (int *)malloc(10*sizeof(int));
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }
    printf("Enter array elements (integer) (enter 0 for end of input): \n");
    int i = 0;
    while(i != n)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        if (A[i] == 0)
        {
            printf("Enter off\n\n");
            break;
        }
    i++;
    }

    int max_in_A = A[0];
    int max_even_in_A = 0;
    int j = 0;
    while(j < i)
    {
        if (max_in_A < A[j])
        {
            max_in_A = A[j];
        }
        if (max_even_in_A < A[j] && (A[j]%2==0))
        {
            max_even_in_A = A[j];
        }

        j++;
    }
    int max_count = 0;
    j = 0;
    while(j < i)
    {
        if (A[j] == max_even_in_A)
        {
           max_count++;
        }
        j++;
    }

    printf("Max number in A: %d \n", max_in_A);
    printf("Max even number in A: %d \n", max_even_in_A);
    printf("The count of numbers equal to the maximum: %d \n", max_count);



    free(A);
    return 0;
}
