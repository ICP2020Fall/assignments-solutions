#include <stdio.h>

int main()
{

    char a[20], b[20];
    scanf("%s%s", a, b);
    int c = 0, Sum[21];
    for (int i = 19; i >= 0; i--)
    {
        int sum = ((int)a[i] - '0') + ((int)b[i] - '0') + c;
        Sum[i] = sum % 10;
        c = sum / 10;
    }
    if (c)
    {
        printf("%d", c);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d", Sum[i]);
    }
}
