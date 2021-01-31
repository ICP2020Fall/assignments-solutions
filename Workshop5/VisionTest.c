#include <stdio.h>
#define N 100000

int main() 
{
	char str1[N], str2[N];
	int differences = 0, n, i;
	
	scanf("%d", &n);
	scanf("%s", str1);
	scanf("%s", str2);
	
	for (i = 0; i < n; i++)
		if (str1[i] != str2[i])
			differences++;
			
	printf("%d", differences);
}


