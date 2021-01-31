#include<stdio.h>
void dateReader (int A[][3], int i)
{
	char str[10];
	scanf("%s", str);
	A[i][0] = (str[9] - '0') + (str[8] - '0') * 10;
	A[i][1] = (str[6] - '0') + (str[5] - '0') * 10;
	A[i][2] = (str[3] - '0') + (str[2] - '0') * 10 + (str[1] - '0') * 100 + (str[0] - '0') * 1000;
	if (str[4] != '/' || str[7] != '/')
		A[i][0] = 0;
}
int dateChecker (int A[][3], int n)
{
	int i;
	for (i = 0; i < n + 2; i++)
		if (A[i][0] < 1 || A[i][0] > 31 || A[i][1] < 1 || A[i][1] > 12)
			return 1;
	return 0;
}
void arrangeDates(int A[][3])
{
	int i, temp;
	if (A[0][0] + (A[0][1] * 100) + (A[0][2] * 10000) > A[1][0] + (A[1][1] * 100) + (A[1][2] * 10000))
		for(i = 0; i < 3; i++)
		{
			temp = A[0][i];
			A[0][i] = A[1][i];
			A[1][i] = temp;
		}
}
void resultPrinter(int A[][3], int n)
{
	int flag = 1, i, firstDate, lastDate;
	firstDate = A[0][0] + (A[0][1] * 100) + (A[0][2] * 10000);
	lastDate = A[1][0] + (A[1][1] * 100) + (A[1][2] * 10000);
	for(i = 2; i < n + 2; i++)
		if (A[i][0] + (A[i][1] * 100) + (A[i][2] * 10000) > firstDate && A[i][0] + (A[i][1] * 100) + (A[i][2] * 10000) < lastDate)
		{
			printf("%d%d%d%d/%d%d/%d%d\n", A[i][2] / 1000, (A[i][2] % 1000) / 100, (A[i][2] % 100) / 10, A[i][2] % 10, A[i][1] / 10 , A[i][1] % 10, A[i][0] / 10, A[i][0] % 10);
			flag = 0;
		}
	if (flag)
		printf("0");
}
int main()
{
	int A[12][3], n, i, check = 0;
	dateReader(A, 0);
	dateReader(A, 1);
	scanf("%d", &n);
	for(i = 2; i < n + 2; i++)
		dateReader(A, i);
	if (dateChecker(A, n))
		printf("NOT_VALID");
	else
	{
		arrangeDates(A);
		resultPrinter(A, n);
	}
}

