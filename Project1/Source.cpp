#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a, b, c ,temp;
	scanf("%d %d %d ", &a, &b, &c);
	char str[4];
	scanf("%s", str);
	int abc[] = { a,b,c };
	for ( int i = 0; i < 3 ; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			temp = abc[i] ;
			abc[i] = abc[j];
			abc[j] = temp;

		}

	}
	if (str[0] == 'A' && str[1] == 'B' && str[2] == 'C' )
	{
		printf("%d %d %d", abc[0], abc[1], abc[2]);
	}
	else if (str[0] == 'A' && str[1] == 'C' && str[2] == 'B' )
	{
		printf("%d %d %d", abc[0], abc[2], abc[1]);
	}
	else if (str[0] == 'B'  && str[1] == 'A' && str[2] == 'C')
	{
		printf("%d %d %d", abc[1], abc[0], abc[2]);
	}
	else if (str[0] == 'B' && str[1] == 'C'  && str[2] == 'A')
 	{
		printf("%d %d %d", abc[1], abc[2], abc[0]);
	}
	else if (str[0] == 'C' && str[1] == 'A' && str[2] == 'B')
	{
		printf("%d %d %d", abc[2], abc[0], abc[1]);
	}
	else if (str[0] == 'C' && str[1] == 'B'  && str[2] == 'A')
	{
		printf("%d %d %d", abc[2], abc[1], abc[0]);
	}
	
}