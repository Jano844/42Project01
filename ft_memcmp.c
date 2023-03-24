/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:57:55 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/24 09:26:19 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	j = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
		{
			j++;
			i++;
		}
		if (str1[i] != str2[i])
		{
			i++;
			break ;
		}
	}
	return (str1[j] - str2[j]);
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "HelloWorld";
//     size_t n = 10;
//     printf("%i\n", ft_memcmp(str1, str2, n));
//     printf("%i\n", memcmp(str1, str2, n));
//     return (0);
// }
