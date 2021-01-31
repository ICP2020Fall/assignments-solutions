#include <stdio.h>
#define MAX 100

void swap (unsigned long long int** p, unsigned long long int** q) {
    unsigned long long int* temp = *p;
    *p = *q;
    *q = temp;
}

int main () {
    int n, k;
    scanf("%d%d", &n, &k);
    unsigned long long int first[MAX], second[MAX];
    unsigned long long int* cur = second;
    unsigned long long int* prev = first;
    for (int i = 0; i < k; i++) 
        first[i] = 1;    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < k; j++) {
            if (j == 0)
                cur[j] = 1;
            else
                cur[j] = cur[j - 1] + prev[j] + prev[j - 1];
            
        }
        swap(&cur, &prev);
    }
    swap(&cur, &prev);
    printf("%llu", cur[k - 1]);
}
