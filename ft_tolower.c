/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:04:48 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/15 12:07:50 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

// int main()
// {
// 	char c;

// 	c = 'c';
// 	printf("%c\n", ft_tolower(c));
// 	printf("%c", tolower(c));
// 	return(0);
// }
