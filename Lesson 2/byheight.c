/*
� ������ ���� ����������� �������� ����������� �� �����. ������ �� ��� ����� ������ � ������ ��� ��� �������� ���������� ����� ��� �������� ��������� ������� "�� �� �����". �������� ��� � ���� �������� ����.

������ ������� ������
� ������ ������ �� ������ �����. � ������ - ���� ������� ��������, �� ������ - ������� � ��� �����. � ��������� ������ - ����� 0, ���������� ����� �����. ��������������, ��� ������ ������� ������ ���� ����� �������, ��������� - ����� ������. ��� ����� ��������� - ����������� �����. ��������� �� ����� ��� 2000000.

������ �������� ������
�������� ����� ��� �������� ���������, � ������� ������ ���� �������.
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n = 10;
    int *A = (int *)malloc(10*sizeof(int));
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }
    printf("Enter student height in cm (enter 0 for end of input): \n");
    int i = 0;
    while(i != n)
    {
        printf("Student[%d]: ", i+1);
        scanf("%d", &A[i]);
        if (A[i] == 0)
        {
            printf("Enter off\n");
            break;
        }
    i++;
    }

    int j = 0, count_pairs = 0;
    while(j < i)
    {
        if (A[j] < A[j+1])
        {
            count_pairs++;
        }
        j++;
    }

    printf("Number of pairs of students not standing tall: %d", count_pairs);


    free(A);
    return 0;
}
