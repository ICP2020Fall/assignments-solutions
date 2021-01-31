#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
f(n); }

void f(int n) {
    if (n < 1000) {
        printf ("%d", n);
        return;
    }
    f(n/1000);
    printf (",%03d", n%1000);
}


