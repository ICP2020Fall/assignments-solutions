#include <stdio.h>
#include <stdlib.h>

int main() {
	long long int x,n,res=0;
	long long int *xi;
	xi=calloc(100000,sizeof(long long int));
	scanf("%lld",&n);
	long long int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		xi[x+50000]=x;
	}
	for(i=0;i<100000;i++)
		res+=xi[i];
	printf("%lld",res);
	return 0;
}

