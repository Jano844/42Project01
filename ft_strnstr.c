
#include <string.h>
#include <stdio.h>


char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
    size_t		l;

    i = 0;
    j = 0;
    while(needle[i] != '\0')
        i++;
    if(i == 0)
        return ((unsigned char *)hays);
    l = 0;
    while(hays[j] != '\0' && len > j)
    {
        if(hays[j] == needle[l])
        {
            j++;
            l++;
            if(l == i)
                break;
        }
        else
        {
            l = 0;
            j++;
        }
    }
    if(l == i)
        return ((unsigned char *)hays+ (j - l));
    else
        return('\0');
}

int main()
{
    char hays[] = "Hallo Welt wo bist du"; 
    char needle[] = "Welt";
    size_t len = 10;
    
    printf("%s\n", ft_strnstr(hays, needle, len));
    printf("%s", strstr(hays, needle));
    return(0);
}