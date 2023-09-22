#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char *))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (tab[i])
    {
        if (f(tab[i]) == 1)
            count++;
        i++;
    }
    return (count);
}

int f_test(char *str)
{
    if (str[0] == 'a')
        return (1);
    return (0);
}

int main()
{
    char *tab[] = {"abc", "def", "ahi", "akl", "mno", "pqr", "stu", "vwx", "yz", 0};
    printf("%d\n", ft_count_if(tab, &f_test));
    return (0);
}
