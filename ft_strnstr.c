/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:15:59 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/24 12:27:19 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		l;

	i = strlen(needle);
	j = 0;
	if (i == 0)
		return ((char *)hays);
	i = 0;
	l = 0;
	while (hays[j] != '\0' && len > j)
	{
		while (hays[j] == needle[i])
		{
			j++;
			i++;
			if (needle[i] == '\0')
				return ((char *)hays + (j - i));
		}
		i = 0;
		j++;
	}
	return ((char *)hays);
}

// int main()
// {
//     char hays[] = "Hallo Welt wo bist du";
//     char needle[] = "Welt";
//     size_t len = 10;

//     printf("%s\n", ft_strnstr(hays, needle, len));
//     printf("%s", strstr(hays, needle));
//     return(0);
// }
