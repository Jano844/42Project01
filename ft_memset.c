/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:57:54 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/14 16:42:57 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memset(char *str, int num, size_t length)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < length)
	{
		str[i] = num;
		i++;
	}
	return (str);
}

int main ()
{
	int length = 5;
	char num = '1';
	char target[21] = "01234567890123456789";
	char target1[21] = "01234567890123456789";


	memset( target, num, length );
	printf( "%s\n", target );
	printf("%s", ft_memset(target1, num, length));
	return 0;
}
