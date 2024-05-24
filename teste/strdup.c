#include <stdlib.h>

int mystrlen(char *str)//gets size of str(src)
{
	int i;

	i=0;
	while(str[i])
		i++;
	return i;
}

char *mystrdup(char *str)
{
	int i;
	char *dest;

	i=0;
	//ptr=(cast-type*)malloc(byte-size);
	dest = (char *)malloc(mystrlen(str) * sizeof(char) + 1);//defines size o'dest(same as src)
	if (!dest)//checks if allocation was successful
		return 0;
	while (str[i])//writes src content into dest
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';//terminates dest with NULL
	return dest;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char *src;
	char *allocated;

	src = "Hello";
	printf("Src: %s | %p\n", src, src);//pritns src + adress
	allocated = strdup(src);
	printf("Testing from lib: %s | %p\n", allocated, allocated);//prints allocated from lib
	free(allocated);
	allocated = mystrdup(src);
	printf("Testing from my function: %s | %p\n", allocated, allocated);//now from function
	free(allocated);
	return 0;
}
