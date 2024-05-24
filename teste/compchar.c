#include <stdio.h>
int comp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(int argc, char **argv)
{
	int i;
	if (argc != 3)
		printf("Passe duas strings!");
	i = 1;
	if (comp(argv[i], argv[i + 1]) > 0 )
		printf("Deu ruim");
	else
		printf("Deu bom");
	return (0);
}
