#include <stdio.h>
#define N 30

int main() 
{
	int n, m, l, r, i, j; 
	int Days[N] = {0};
	
	scanf("%d%d", &n, &m);
	for (i = 0; i < n + m; i++) 
	{
		scanf("%d%d", &l, &r);
		for (j = l - 1; j < r; j++)
			Days[j]++;
	}
	int result = 0;
	for (i = 0; i < N; i++)
		if (Days[i] == 2)
			result++;
	printf("%d", result);
}


