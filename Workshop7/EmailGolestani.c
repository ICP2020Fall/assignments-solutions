#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int isUnderLine(char ch)
{
    if (ch == '_'){
        return 1;
    }
    else {
        return 0;
    }
}
int isDot(char ch)
{
    if (ch == '.'){
        return 1;
    }
    else{
        return 0;
    }
}
int Validate(char Email[] , char *pntA, char *pntDot)
{
    int len;
    len = strlen(Email);
    //find place '@' and '.' or :
    for (int i = 0; i < len; i++)
    {
        if (Email[i] == '@')
        {
            pntA = &Email[i];
            if (*pntA == Email[0] || *pntA == Email[len - 1])
            {
                return 0;
            }
        }
        if (*pntA == '@')
        {
            if (Email[i] == '.')
            {
                pntDot = &Email[i];
            }
            if (pntA + 1 == pntDot || *pntDot == Email[len - 1])
            {
                return 0;
            }
        }
    }
    //check if we have '@' and '.' in our code or not;
    if (*pntA != '@' || *pntDot != '.')
    {
        return 0;
    }
    //check Email is VALID or Not:
    int num = 0;
    for (int i = 0; Email[i] != '@'; i++)
    {
        //first character cant be number:
        if (isdigit(Email[0]))
        {
            return 0;
        }
        if (isdigit(Email[i]) + isalpha(Email[i]) + isDot(Email[i]) + isUnderLine(Email[i]) == 0)
        {
            return 0;
        }
        num = i;
    }
    num++;
    for (int i = num + 2; Email[i] != '.'; i++)
    {

        if (isdigit(Email[i]) + isalpha(Email[i]) == 0)
        {
            return 0;
        }
        num = i;
    }
    for (int i = num + 2; Email[i] != '\0'; i++)
    {
        if (isalpha(Email[i]) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    char Email[MAX] = {0}, *pntA, *pntDot;
    int  a, b;
    pntA = &a;
    pntDot = &b;
    scanf("%s", Email);
    if(Validate(Email, pntA, pntDot))
    {
        printf("VALID");
        return 0;
    }
    printf("INVALID");
}


