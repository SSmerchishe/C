#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int N;
	printf("Enter size of array fo create: ");
	scanf("%d", &N);

	int *A = (int *)malloc(N*sizeof(int));
	if (NULL == A) {
		printf("OS didn't gave memory. Exit...\n");
		exit(1);
	}
	printf("Allocate array - OK. Please enter array elements (integer):\n");
	for(int i = 0; i < N; i++)
	{
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	for(int i = N-1; i >=0; --i)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
