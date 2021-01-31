#include <stdio.h>
#define MAX 1001

void printReverse(int);
int main()
{
	int n;
	scanf("%d", &n);
	printReverse(n);
}

void printReverse(int n)
{
	if (n == 0)
		return;
		
	char S[MAX];
	scanf("%s", S);
	printReverse(n - 1);
	printf("%s ", S);
}


