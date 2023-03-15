/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:14:27 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/14 17:30:59 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_memcpy(char *dest, char *src, int len)
{
	int i = 0;
	int a = len;
	char temp[100];
	while (len > 0 && src[i] != '\0')
		{
		len--;
		temp[i] = src[i];
		i++;
		}
	i = 0;
	while (a > 0 && temp[i] != '\0')
		{
		len--;
		dest[i] = temp[i];
		i++;
		}
	dest[i] = '\0';
	return dest;
}

int main()
{
	int n;

	n = 7;
	char dest1[10] = "";
	char dest2[10] = "";

	char src1[] = "HelloWorld";
	char src2[] = "HelloWorld";
	printf("%s\n", memcpy(dest1, src1, n));
	printf("%s\n", ft_memcpy(dest2, src2, n));
	return(0);
}
