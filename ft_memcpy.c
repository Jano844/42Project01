// #include <string.h>
// #include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	i = 0;
	while (str2[i] != '\0' && i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	dest = (char*)str1;
	return(dest);
}

// int main()
// {
// 	char src[] = "HelloWorld";
// 	char dest[100];
// 	int n = 10;

// 	printf("%s\n", ft_memcpy(dest, src, n));
// 	return(0);
// }