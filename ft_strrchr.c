#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int let)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    while (i > 0)
    {
        if(*str == let)
            break;
        str--;
        i--;
    }
    if(*str == let)
        return((char *)str);
    return('\0');
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "HelloWorld";
//     int letter = 'W';

//     printf("%s\n", ft_strrchr(str1, letter));
//     //ft_strchr(str1, letter);
//     printf("%s\n", strrchr(str2, letter));
//     return(0);
// }