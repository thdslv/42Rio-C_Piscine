#include <unistd.h>

void rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	while (--i >= 0)
	{
		write(1, &str[i], 1);
	}
}

int main()
{
	rev_print("Hello");
	return (0);
}
