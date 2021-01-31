#include<stdio.h>
#include<string.h>
void readEmail (char s[])
{
	int i;
	for(i = 0; ; i++)
	{
		scanf("%c", s + i);
		if (s[i] == '\n')
		{
			s[i] = '\0';
			break;
		}
	}
}
int checkAddress(char s[], char n[], char d[], char y[])
{
	int i, lname, lymail;
	lname = strcspn(s, "@");
	if(strspn(s, "1234567890") != 0)
		return 0;
	if(strspn(s, n) != lname || lname == 0)
		return 0;
	lymail = strcspn(s + lname + 1, ".");
	if(strspn(s + lname + 1, y) != lymail || lymail == 0)
		return 0;
	if(s[strspn(s + lname + lymail + 2, d) + lname + lymail + 2] != '\0' || strspn(s + lname + lymail + 2, d) == 0)
		return 0;
	return 1;
}
int main()
{
	char email[10000], name[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._";
	char domain[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char yourmail[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	readEmail(email);
	printf("%s", checkAddress(email, name, domain, yourmail)?"VALID":"INVALID");
}

