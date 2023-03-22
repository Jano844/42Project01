#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main()
// {
//     char c;
//     int fd;

//     fd = 1;
//     c = 'c';
//     ft_putchar_fd(c, fd);
// 	return 0;
// }