char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int    i;  

        i = 0;
        while (src[i] != '\0' && i < n)
        {
                dest[i] = src[i];
                i++;
        }
	/*dest[i] = 0;
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }*/
        return (dest);
}

#include <stdio.h>

int     main(void)
{
        char    string[3] = "42";
        char    destiny[] = "Hello";
        ft_strncpy(destiny, string, 1);
        printf("%s", destiny);
        return (0);
}

