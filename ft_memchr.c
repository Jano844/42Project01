#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char	*str;

    i = 0;
    str = (unsigned char *)s;
    while(i < n)
    {
        if(str[i] == c)
            return (str + i);
        i++;
    }
    return('\0');
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "HelloWorld";
//     int c = 'W';
//     size_t n = 6;
//     printf("%s\n", ft_memchr(str1, c, n));
//     printf("%s\n", memchr(str2, c, n));
//     return (0);
// }