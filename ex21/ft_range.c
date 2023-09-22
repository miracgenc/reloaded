#include <stdlib.h>

// 1 5 : 1 2 3 4

int *ft_range(int min, int max)
{
    int len = max - min;
    int *arr;

    arr = (int *) malloc(sizeof(int) * len);
    if (arr == NULL)
        return (NULL);
    int i = 0;
    while (i < len)
    {
        arr[i] = min + i;
        i++;
    }
    return (arr);
}