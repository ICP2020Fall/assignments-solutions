#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;
	int n;
    /* Input two strings from user */
//    scanf("%s", str1);
//    scanf("%s", str2);
	gets(str1);
	gets(str2);
    scanf("%d", &n);

    /* Move till the end of str1 */
    int i;
    for(i = 0; i<n; i++){
    	++s1;
	}

    /* Copy str2 to str1 */
    while(*(s1++) = *(s2++));

    printf("%s", str1);

    return 0;
}

