#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1,const void *s2, size_t n)
{
    unsigned int i;
    unsigned int j;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    j = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {   
        if(str1[i] == str2[i])
        {
            j++;
            i++;
        }
        if(str1[i] != str2[i])
        {
            i++;
            break;
        }
    }
    if(j == i)
        return(0);
    else if(str1[j] - str2[j] < 0)
        return(-1);
    else
        return(1);
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "HelloWorld";
//     size_t n = 10;
//     printf("%i\n", ft_memcmp(str1, str2, n));
//     printf("%i\n", memcmp(str1, str2, n));
//     return (0);
// }