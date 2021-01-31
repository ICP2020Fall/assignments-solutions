#include <stdio.h>
#define MAX 100000
int main()
{
    int num, speed[MAX], ans = 1;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &speed[i]);
    }
    for (int i = num - 1; i > 0 ; i--)
    {
        if (speed[i] < speed[i - 1])
        {
            speed[i - 1] = speed[i];
        }
    }
    for (int i = 0; i < num - 1; i++)
    {
        if (speed[i] != speed[i + 1])
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    for (int i = 0; i < num; i++)
    {
        if (speed[i] != speed[i + 1])
        {
            printf("%d ", speed[i]);
        }
    }
}

