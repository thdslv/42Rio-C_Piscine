#include <stdio.h>

void comp(char *s1, char *s2)
{
	while(*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}

void swap()
{

}

int main (int argc, char **argv)
{
	int x;
	int i;

	x = 1;
	while (x < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (comp(argv[i], argv[i + 1]) > 0)
			{
				swap(&argv[i], &argv[i + 1]);
			}
			i++;			
		}
		
	}
}
