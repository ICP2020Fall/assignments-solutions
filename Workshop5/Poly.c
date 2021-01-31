#include<stdio.h>
#include<math.h>

#define N 10

void mul(int [], int [], int[], int);

int main()
{
	int n, i;
	int A[N];
	int B[N];
	int C[2 * N] = {0};
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	
	for (i = 0; i < n; i++)
		scanf("%d", &B[i]);	
	
	mul(A, B, C, n);
	
	for (i = 0; i < 2*n-1; i++)
		printf("%d ", C[i]);
}

void mul(int A[], int B[], int C[], int num)
{
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			C[i + j] += A[i] * B[j];
}


