#include <stdio.h>

void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while (i < length)
        f(tab[i++]);
}

void ft_2(int i)
{
    printf("%d\n", i);
}

void main()
{
    int arr[] = {1, 2, 3};
    ft_foreach(arr, 3, ft_2);
}