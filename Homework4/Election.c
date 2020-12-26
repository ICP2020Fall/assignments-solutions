#include <stdio.h>

int gcd (int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a > b)
        return gcd(a % b, b);
    else
        return gcd(a, b % a);
}

int count_votes(int n, int id) {
    int count = 0;
    for (int j = 2; j <= n + 1; j++) {
        if (gcd(j, id) == 1)
            count++;
    }
    return count;
}

void solution1 (int n) {
    int max, value, id_max;    
    for (int i = 2; i <= n + 1; i++) {
        value = count_votes(n, i);
        if (i == 2) {
            max = value;
            id_max = 2;
        } else {
            if (value >= max) {
                max = value;
                id_max = i;
            }
        }
    }
    printf("%d", id_max, max);
}

int is_prime(int m) {
    for (int i = 2; i * i <= m; i++)
        if (m % i == 0)
            return 0;
    return 1;
}

void solution2 (int n) {
    int max;
    for (int i = 2; i <= n + 1; i++) {
        if (is_prime(i))
            max = i;
    }
    printf("%d", max);
}

int main () {
    int n;
    scanf("%d", &n);
    //solution1(n);
    solution2(n);
}