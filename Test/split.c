#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_sp(char const *s, char c, int *i)
{
    int j;

    i[1] = 1;
    j = 0;
    while (s[i[0]] == c)
    {
        i[0]++;
        i[1]++;
    }
    while (s[i[0]] != '\0')
    {
        if (s[i[0]] == c && s[i[0] + 1] == c)
            i[1]++;
        if(s[i[0]] == c && s[i[0] + 1] != c)
            return((int *)i);
        i[0]++;
    }
    i[1] = 0;
    i[0] -= 1;
    return((int *)i);
}
int ft_count_words(char const *s, char c)
{
    int j;
    int l;

    j = 0;
    l = 0;
    while (s[j] == c)
        j++;
    while (s[j] != '\0')
    {
        if(s[j] == c && s[j + 1] != c && s[j + 1] != '\0')
            l++;
        j++;
    }
    return(l + 1);
}

int ft_char_per_word(char const *s, char c, int *i)
{
    ft_sp(s, c, i);
    i[2] = i[0] - i[1] - i[3] + 1;
    i[3] = i[0] + 1;
    i[0] += 1;
    return(i[2]);
}

int pos_word(char const *s, char c, int i)
{

}

char **ft_split(char const *s, char c)
{
    int cwords;
    char **strings;
    int i[4];
    int j;
    int l;

    i[0] = 0;
    i[3] = 0;
    j = 0;
    cwords = ft_count_words(s, c);
    

    // strings = malloc(cwords * sizeof(char *));

    while (j < cwords)
    {
        //strings[j] = malloc(ft_char_per_word(s, c, i) * sizeof(char));
        while(ft_char_per_word(s, c, i) > 0)
        {

        }
        cwords--;
    }
}


int main()
{
    char str[] = "....abc.abc....canasft..d12.";
    char split = '.';

    ft_split(str, split);
    //printf("%s\n", );
    return(0);
}