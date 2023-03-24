/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:18:14 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/15 11:32:17 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (i >= n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// //Wenn dest kleiner ist als source muss
// //gebreakt werden und fehlermeldung ausgeschrieben werden
// int main()
// {
// 	char dest[4];
// 	char src[] = "Hello";

// 	char dest1[4];
// 	char src1[] = "Hello";

// 	unsigned int n = 9;

// 	printf("%zu\n", ft_strlcpy(dest, src, n));
// 	printf("%lu\n", strlcpy(dest1, src1, n));

// 	printf("%s\n", dest);
// 	printf("%s\n", dest1);
// 	return (0);
// }
