#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main()
// {
//     char *c;
//     int fd;
//     fd = 1;
//     c = "abcd";
//     ft_putstr_fd(c, fd);
// 	return 0;
// }