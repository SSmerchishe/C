/*
¬ начале пары физкультуры студенты выстроились по росту. ќднако не все пошло гладко и тренер как раз пытаетс€ подсчитать число пар соседних студентов сто€щих "не по росту". ѕомогите ему в этом нелегком деле.

‘ормат входных данных
¬ каждой строке по одному числу. ¬ первой - рост первого студента, во второй - второго и так далее. ¬ последней строке - число 0, означающее конец ввода. ѕредполагалось, что первый студент должен быть самым высоким, последний - самым низким. ¬се роста студентов - натуральные числа. —тудентов не более чем 2000000.

‘ормат выходных данных
¬ыведите число пар соседних студентов, в которых первый ниже второго.
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
