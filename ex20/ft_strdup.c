#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char *ft_strdup(char *src)
{
    char *dest;

    dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (dest == NULL)
        return (NULL);
    return (ft_strcpy(dest, src));
}
