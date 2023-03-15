/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:10:42 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/14 17:21:46 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_memcpy(char *dest, char *src, int len)
{
	int i = 0;
	while (len > 0 && src[i] != '\0')
		{
		len--;
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	return dest;
}

int main()
{
	int n;

	n = 10;
	char dest1[10] = "";
	char dest2[10] = "";

	char src1[] = "HelloWorld";
	char src2[] = "HelloWorld";
	printf("%s\n", memcpy(dest1, src1, n));
	printf("%s\n", ft_memcpy(dest2, src2, n));
	return(0);
}
