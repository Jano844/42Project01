/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:30:22 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/24 09:47:00 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_digits(int n)
{
	int	digets;

	digets = 0;
	while (n > 9)
	{
		digets++;
		n /= 10;
	}
	return (digets + 1);
}

char	*ft_itoa(int n)
{
	int		negativ;
	int		digets;
	char	*mall;

	negativ = 0;
	digets = 0;
	if (n < 0)
	{
		negativ++;
		n *= -1;
	}
	digets += ft_digits(n);
	mall = (char *)malloc(sizeof(char) * (negativ + digets + 1));
	if (mall == 0)
		return (NULL);
	if (negativ != 0)
		*(mall) = '-';
	*(mall + (digets + negativ + 1)) = '\0';
	while (digets--)
	{
		*(mall + digets + 1) = n % 10 + '0';
		n = n / 10;
	}
	return (mall);
}

// int main()
// {
//     int n;
//     char *mall;

//     n = -1100;
//     mall = ft_itoa(n);
//     printf("%s\n", mall);
//     free(mall);
//     return(0);
// }
