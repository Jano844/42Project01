#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {   
        if(s1[i] == s2[i])
        {
            j++;
            i++;
        }
        if(s1[i] != s2[i])
        {
            i++;
            break;
        }
    }
    if(j == i)
        return(0);
    else if(s1[j] - s2[j] < 0)
        return(-1);
    else
        return(1);
}

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "HelloWorld";
    size_t size = 9;

    printf("%i\n", ft_strncmp(str1, str2, size));
    printf("%i\n", strncmp(str1, str2, size));
    return(0);
}