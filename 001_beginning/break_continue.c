//This program is to practically explain the concept of the BREAK and CONTINUE Keyword in C
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i == 2)
		{
			continue;
		}
		if (i == 9)
		{
			continue;
		}
		if (i == 15)
		{
			continue;
		}
		if (i == 18)
		{
			break;
		}

		printf("%d ", i);
	}
	return 0;
}
