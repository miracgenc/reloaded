#include <string.h>
#include <stdio.h>
#include "unistd.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (s2[i])
        return (-s2[i]);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (1);
    size_t i;
    char *tmp;

    i = 1;
    while (i < argc - 2)
    {
        if (ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            tmp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = tmp;
            i = 1;
        }
        else
            i++;
    }
    i = 1;
    while (i < argc - 1)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
}
