#include <stdio.h>
#define X 1000
void ReadArray(char str[])
{
    char character;
    scanf("%c", &character);
    if(character != '\n')
    {
        for (int i = 1; character != '\n'; i++)
        {
            str[i - 1] = character;
            scanf("%c", &character);
        }
    }
}
int main()
{
    char sentence[X] = {0}, wrong[X] = {0}, correct[X] = {0} ;
    int pointer1=0 ,pointer2=0 ,wrongfirst[X] = {0} ,wrlengh;
    ReadArray(sentence);
    ReadArray(wrong);
    ReadArray(correct);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == wrong[pointer2])
        {
            if (pointer2==0)
            {
                pointer1=i;
            }
            pointer2++;
            if(wrong[pointer2] == '\0')
            {
                wrlengh=i-pointer1;
                wrongfirst[pointer1]=1;
                //printf("%d %d\n",pointer1, i);
                pointer2 = 0;
            }

        }
        else
        {
            pointer2=0;
        }
    }
    for (int i = 0 ;sentence[i] != '\0'; i++)
    {
        if (!wrongfirst[i])
        {
            printf("%c",sentence[i]);
        }
        else
        {
            //printf("%d",i);
            for (int j=0; correct[j] != '\0'; j++)
            {
                printf("%c",correct[j]);
            }
            i+=wrlengh;
        }
    }
    return 0;
}
