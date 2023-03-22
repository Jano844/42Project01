#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    unsigned int i;
    char newline;

    i = 0;
    newline = '\n';
    while(s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, &newline, 1);
}

// int main()
// {
//     char *c;
//     int fd;
//     fd = 1;
//     c = "abcd";
//     ft_putendl_fd(c, fd);
// 	return 0;
// }