#include <stdio.h>

int fib (int n, int a, int b) {
    if (n < a)
        return n;
    int m = fib(n, b, a + b);
    if (m < a)
        return m;
    printf("%d ", a);
    return m - a;
}

int main () {
    int n;
    scanf("%d", &n);
    fib(n, 1, 1);
}