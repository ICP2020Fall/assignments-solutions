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

int main () {
    int a, b, c, d, x, y, p, q, gcd_x_y;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    x = a * d;
    y = b * c;
    gcd_x_y = gcd(x, y);
    p = x / gcd_x_y;
    q = y / gcd_x_y;
    if (y > x)
        printf("%d/%d", q - p, q);
    else if (x > y)
        printf("%d/%d", p - q, p);
    else
        printf("0");
}