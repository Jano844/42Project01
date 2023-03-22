#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int len1;
    unsigned int len2;
    char *str;

    len1 = 0;
    len2 = 0;
    while(s1[len1] != '\0')
        len1++;
    while(s2[len2] != '\0')
        len2++;
    str = malloc(1 * (len1 + len2 + 1));
    if(str == 0)
        return('\0');
    len1 = 0;
    len2 = 0;
    while (s1[len1] != '\0')
    {
        str[len1] = s1[len1];
        len1++;
    }
    while (s2[len2] != '\0')
    {
        str[len1] = s2[len2];
        len1++;
        len2++;
    }
    str[len1] = '\0';
    return(str);
}

int main ()
{
    char str1[] = "Alle meine Entchen ";
    char str2[] = "schwimmen auf dem See.";

    char *str = ft_strjoin(str1, str2);
    printf("%s\n", str);

    free(str);
    return(0);
}