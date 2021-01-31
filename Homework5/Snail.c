#include <stdio.h>
#include <stdlib.h>

int square(int num)
{
	int flag=0,i;
	for(i=0;i<=(num);i++)
		if((i*i)==num)
			flag++;
	
	return flag;
}

int main(int argc, char *argv[]) {
	int n,n1,res=0,score=0;
	int **mat;
	scanf("%d",&n);
	int i,j;
	mat = malloc(n * sizeof(int*));
	for(i=0;i<n;i++)
		mat[i] = malloc(n * sizeof(int));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&mat[i][j]);	
					
	n1=n/2;
		
	for(i=0;i<n1;i++)
	{
		for(j=i;j<(n-i);j++)
		{
			res+=mat[i][j];
			score+=square(res);
		}
		
		for(j=i+1;j<(n-i);j++)
		{
			res+=mat[j][n-i-1];
			score+=square(res);
		}
		
		for(j=(n-i-2);j>(i);j--)
		{
			res+=mat[n-i-1][j];
			score+=square(res);
		}
		
		for(j=(n-i-1);j>i;j--)
		{
			res+=mat[j][i];
			score+=square(res);
		}
	}
	
	if(n%2==1)
	{
		res+=mat[(n/2)][(n/2)];
		score+=square(res);
	}
	
	printf("%d",score);
}


