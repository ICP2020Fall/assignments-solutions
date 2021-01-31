#include <stdio.h>
#include <string.h>
#define MAX 1000000000000000000000
int main()
{
	int count = 0, i = 0,B,cunt,j;
	char number[100];
	
	gets(number);
	
	while (number[i] != '\0')
		i++;

	count = i;
	i = 0;
	
	while (number[i] == '0')
		i++;
	
	if ( i == count)
		printf("%c",number[0]);
		
	
	count = count - i;
	cunt = i;
	B = count % 3;
	
	
	for (i ; i < cunt + B; i++)
	{
		printf("%c",number[i]);
		
	}	
	if (count % 3 > 0 && count > 2)
		printf(",");
	
	

	
	for ( i = cunt + B ; i < count + cunt ;)
	{	
		printf("%c",number[i]);
		printf("%c",number[i + 1]);
		printf("%c",number[i + 2]);
		i += 3;
		if ( i != (count + cunt) && (count > 2))
			printf(",");
	}
	

}

