#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    if(s)
    {
        while (s[i] != '\0')
        {
            f(i, &s[i]);
            i++;
        }
    }
}

// int main()
// {
//     char str[10] = "helloworld";
//     char *s;

//     ft_striteri(str, "Gewollte Funkrion");
//  	printf("%s\n", s);
// 	return 0;
// }