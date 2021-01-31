#include <stdio.h>
#define MAX 100000

int main () {
    int n, ptr = -1, speed;
    int stack[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &speed);
        while (ptr != -1 && speed <= stack[ptr])
            ptr = ptr - 1; // pop speed from stack
        ptr = ptr + 1; // push current speed
        stack[ptr] = speed; // push current speed
    }
    printf("%d\n", ptr + 1); // print the length of stack
    for (int j = 0; j <= ptr; j++) // print speeds in stack
        printf("%d ", stack[j]);
}