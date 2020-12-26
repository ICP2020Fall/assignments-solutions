#include <stdio.h>

void to_final_base (long long int x, int base_to) {
    if (x < base_to)
        printf("%lld", x);
    else {
        int digit = x % base_to;
        to_final_base(x / base_to, base_to);
        printf("%d", digit);
    }
}

long long int to_decimal (int base_from, int n) {
    long long int result = 0;
    char digit;
    long long int pow = 1;
    for (int i = 0; i < n - 1; i++)
        pow *= base_from;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &digit);
        result += (digit - '0') * pow;
        pow /= base_from;
    }
    return result;
}

int main () {
    int base_from, base_to, n;
    scanf("%d%d%d", &base_from, &base_to, &n);
    long long int x = to_decimal(base_from, n);
    printf("%lld\n", x);
    to_final_base(x, base_to);
}
