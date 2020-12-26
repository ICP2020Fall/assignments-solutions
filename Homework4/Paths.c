#include<stdio.h>

int calc(int n, int m) {
	if (n == 1 || m == 1)
		return 1;
	else
		return calc(n - 1, m) + calc(n, m - 1) + calc(n - 1, m - 1);
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d", calc(n, m));
}
