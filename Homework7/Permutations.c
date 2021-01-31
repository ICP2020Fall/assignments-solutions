#include<stdio.h>

void permute(char str[], int start, int n) {
    if (start == n - 1)
        printf("%s\n", str);
    else {
        char temp;
        for (int i = start; i < n; i++) {
            temp = str[start];
            str[start] = str[i];
            str[i] = temp;
            permute(str, start + 1, n);
        }
        // circulate shift left
        temp = str[start];
        for (int i = start; i < n - 1; i++) {
            str[i] = str[i + 1];
        }
        str[n - 1] = temp;
    }
}

int main () {
    char str[8];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf(" %c", &str[i]);
    str[n] = '\0';
    permute(str, 0, n);
}