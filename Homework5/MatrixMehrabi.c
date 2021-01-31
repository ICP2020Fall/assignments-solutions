#include <stdio.h>
//#define MAX 10



//void Matrices(){
//
//}

int main() {
    int n,m,mcount=0,ncount=0,ccount=0;
    int N[10][10]={0};
    int M[10][10]={0};
    int C[10][10]={0};

    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            int a;
            scanf("%d", &a);
            N[j][i]=a;
        }
    }
    scanf("%d",&m);
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < m; ++i) {
            int a;
            scanf("%d", &a);
            M[j][i]=a;
        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (N[j][i]==N[i][j])
                ncount++;
        }
    }

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < m; ++i) {
            if (M[j][i]==M[i][j])
                mcount++;
        }
    }

    if (ncount==(n*n))
        printf("A\n");
    if (mcount==(m*m))
        printf("B\n");



    if (n==m){//n*m
        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < n; ++l) {
//                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < n; ++j) {
                        C[k][l] += N[k][j] * M[j][l];
                    }
//                }
            }
        }


        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

    } else
        printf("FAILED");
}



