#include <stdio.h>

int function(int n, long long int k, int invert) {
    if (n == 1)
        return (k - 1) ^ invert;
    if (k % 2 == 0)
        return function(n - 1, (k + 1) / 2, 1 - invert);
    else
        return function(n - 1, (k + 1) / 2, invert);
}

int main() {
    int n;
    unsigned long long int k;
    scanf("%d%lld", &n, &k);
    printf("%d\n", function(n, k, 0));
    printf("%lld", k);
}
