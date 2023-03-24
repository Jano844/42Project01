#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int let)
{
    while (*str != '\0')
    {
        if(*str == let)
            break;
        str++;
    }
    if(*str == let)
        return((char *)str);
    return("\0");
}

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "HelloWorld";
    int letter = 'W';

    printf("%s\n", ft_strchr(str1, letter));
    //ft_strchr(str1, letter);
    printf("%s\n", strchr(str2, letter));
    return(0);
}
