#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_digits(int n)
{
    int digets;

    digets = 0;
    while (n > 9)
    {
        digets++;
        n /= 10;
    }
    return(digets + 1);
}


char *ft_itoa(int n)
{
    int digets;
    int negativ;
    char *mall;

    negativ = 0;
    digets = 0;
    if(n < 0)
    {
        negativ++;
        n *= -1;
    }
    digets += ft_digits(n);
    if (!(mall = malloc(sizeof(char) * (negativ + digets + 1))));
		return ('\0');
    if(mall == 0)
        return('\0');
    if (negativ != 0)
        *(mall) = '-';
    *(mall + (digets + negativ + 1)) = '\0';
    while (digets--)
	{
		*(mall + digets) = n % 10 + '0';
		n = n / 10;
	}
    return(mall);
}

// int main()
// {
//     int n;
//     char *mall;

//     n = -1100;
//     mall = ft_itoa(n);
//     printf("%s\n", mall);
//     free(mall);
//     return(0);
// }