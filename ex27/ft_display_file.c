#include <fcntl.h>
#include <unistd.h>

#define ERR_FILE_MISSING_MESSAGE "File name missing.\n"
#define ERR_TOO_MANY_ARGUMENT "Too many arguments.\n"
#define MAX_BUF 1000

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
        ft_putstr(ERR_FILE_MISSING_MESSAGE);
    else if (argc != 2)
        ft_putstr(ERR_TOO_MANY_ARGUMENT);

    char *file_name = argv[1];
    int fi = open(file_name, O_RDWR);
    char buf[MAX_BUF];
    read(fi, buf, MAX_BUF);
    ft_putstr(buf);
    close(fi);
}
