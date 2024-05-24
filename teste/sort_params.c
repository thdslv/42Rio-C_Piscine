#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void putstr(char *str)
{
	int i = 0;
	while(str[i] != 0)
	{
		putchar(str[i]);
		i++;
	}
}

void swap(char **a, char **b)
{
	char *swap;
	swap = *a;
	*a= *b;
	*b = swap;
}

int main(int argc, char **argv)
{
	int i = 1;
	while (i < argc - 1)
	{
		int x=0;
		while (argv[i][x] <= argv[i][x+1])
		{
			x++;
		}
		char **swap;
		swap =&argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = *swap;
		i++;
	}
	i=1;
	while (i < argc){
		putstr(argv[i]);
		putchar('\n');
		i++;
	}
	return 0;
}
