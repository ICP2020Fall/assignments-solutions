#include <stdio.h>
#include <stdlib.h>
#define max 100000

int main()
{
    int n, i, sum = 1, h = 0;
    int golabi[max], sorat[max];
    scanf("%d", &n);
    for(i = 0; i < n; i += 1){
        scanf("%d", &golabi[i]);
    }sorat[0] = golabi[i - 1];
    for(i = n - 2; i >= 0; i -= 1){
        if(golabi[i] < sorat[h]){
            sum += 1;
            h += 1;
            sorat[h] = golabi[i];
        }
    }//sorat[h] = golabi[i - 1];
    printf("%d\n", sum);
    for(i = h; i >= 0; i -= 1){
        printf("%d ", sorat[i]);
    }
    return 0;
}

