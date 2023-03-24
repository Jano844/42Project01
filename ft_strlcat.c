/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:25:51 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/15 11:38:36 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int 	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

int main()
{
	char dest[] = "Hello-";
	char src[] = "World";

	char dest1[] = "Hello-";
	char src1[] = "World";

	unsigned int n = 3;

	printf("%zu\n", ft_strlcat(dest, src, n));
	printf("%lu\n", strlcat(dest1, src1, n));

	printf("%s\n", dest);
	printf("%s\n", dest1);
	return (0);
}
