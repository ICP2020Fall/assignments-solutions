#include <stdio.h>
#include <string.h>
#define MAX 300

int main()
{
    int ans[MAX]={0};
    int n;
        scanf("%d",&n);
    char str[MAX];

        for(int i=0 ; i<n ; i++){
            scanf("%s",str);
            for(int j=strlen(str)-1,m=MAX-1 ; j>=0 ; m--,j--){
                ans[m]+=str[j]-48;
            }

        }

        for(int i=MAX-1 ; i>0 ; i--){

            if(ans[i]>=10){
                ans[i-1]+=ans[i]/10;
                ans[i]%=10;
            }
            else
                ans[i]%=10;
        }

        int m;
        for(int i=0 ;i<MAX ; i++)
            if(ans[i]!=0){
                m=i;
                break;
            }

            for(int i=m ; i<=MAX-1 ; i++)
            printf("%d",ans[i]);



}

