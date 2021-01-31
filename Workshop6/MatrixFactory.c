#include <stdio.h>
#define MAX 1000

int isPrime(int m) {
    for (int i = 2; i * i <= m; i++)
        if (m % i == 0)
            return 0;
    return 1;
}

void findMinMaxPrimes(int n, int * p, int * q) {
    int min_found = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0 && isPrime(i)) {
            if (min_found)
                *q = i;
            else {
                min_found = 1;
                *p = i;
            }
        }    
    }
}

void printMatrix(int * array, int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", *(array + j));
        }
        array += b;
        printf("\n");
    }
}

void inputArray(int n, int * array) {
    for (int i = 0; i < n; i++)
        scanf("%d", array + i);
}

int main() {
    int n;
    int array[MAX];
    int firstPrime, lastPrime;
    scanf("%d", &n);
    inputArray(n, array);
    findMinMaxPrimes(n, &firstPrime, &lastPrime);
    printMatrix(array, firstPrime, n / firstPrime);
    printMatrix(array, lastPrime, n / lastPrime);
}