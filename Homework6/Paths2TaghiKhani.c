#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    unsigned long long int Arr[100][100];
    for (int i = 0; i < 100; i++)
        Arr[0][i] = 1;
    for (int i = 0; i < 100; i++)
        Arr[i][0] = 1;

    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            Arr[i][j] = Arr[i - 1][j] + Arr[i - 1][j - 1] + Arr[i][j - 1];
        }
    }
    printf("%llu", Arr[A - 1][B - 1]);
}
