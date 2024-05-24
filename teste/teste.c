#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	hello(char *test)
{
	for (int i = 0; i < 6; i++)
	{
		*test = 'a';
		test++;
	}
}

int main(void)
{
	char **teste;
	
	teste = malloc(sizeof(char *) * 3);
	for (int i = 0; i < 3; i++)
		teste[i] = ft_strdup("Vasco");
	puts(teste[1]);
	hello(teste[1]);
	puts(teste[1]);
	return (0);
}
