#include <stdlib.h>

char *ft_strdup(char *str)
{
    int i;
    char *temp;

    i = 0;
    while(str[i] != '\0')
        i++;
    temp = malloc(1 * (i + 1));
    if (temp == 0)
        return('\0');
    i = 0;
    while(str[i] != '\0')
    {
        temp[i] = str[i];
        i++;
    }
    temp[i] = '\0';
    return(temp);
}

// int main()
// {
//     char str1[] = "Alle meine Entchen";
//     char *str2 = ft_strdup(str1);
//     char *str3 = strdup(str1);

//     printf("%s\n", str1);
//     printf("%s\n", str2);
//     printf("%s\n", str3);

//     free(str2);
//     free(str3);
//     return(0);
// }