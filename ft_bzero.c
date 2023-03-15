/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:39:17 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/14 17:39:50 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_bzero(char *str, size_t length)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < length)
	{
		str[i] = '/0';
		i++;
	}
	return (str);
}
