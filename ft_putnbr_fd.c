#include <unistd.h>

int ft_negativ(int n, int *negativ)
{
    if(n < 0)
    {
        *negativ = 1;
        n *= -1;
    }
    return(n);
}

void ft_putnbr_fd(int n, int fd)
{
    char digets[10];
    int i;
    int negativ;
    char minus;

    i = 0;
    n = ft_negativ(n, &negativ);
    minus = '-';
    while (n > 9)
    {
        digets[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    digets[i] = (n % 10) + '0';
    n /= 10;
    if(negativ == 1)
        write(fd, &minus, 1);
    while(i >= 0)
    {
        write(fd, &digets[i], 1);
        i--;
    }
}

// int main()
// {
//     int num;
//     int fd;
//     fd = 1;
//     num = -1;
//     ft_putnbr_fd(num, fd);
// 	return 0;
// }