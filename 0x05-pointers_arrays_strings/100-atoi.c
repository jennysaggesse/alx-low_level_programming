#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _atoi - convert string to integer
*@s: string to convert
* Return: Integer
*/

int _atoi(char *s)
{
	int i, k, t, m;

	t = 0;
	k = 0;
	m = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{

		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			t = (int) (t * 10);
			t += (int) *(s + i) - '0';
		}
	else if (t != 0 && k == 1)
	{
		break;
	}
	else if (*(s + i) == '-')
	{
		m *= -1;
		k = 1;
	}
	}
	return (t * m);
}
