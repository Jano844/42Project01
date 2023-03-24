/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:10:33 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/24 15:35:04 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	l;

	j = 0;
	i = 0;
	l = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				l++;
			j++;
		}
		j = 0;
		if (l >= 1)
			i++;
		else
			break ;
		l = 0;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set, int c)
{
	int	j;
	int	l;

	l = 0;
	j = 0;
	while (c >= 0)
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[c])
				l++;
			j++;
		}
		j = 0;
		if (l >= 1)
			c--;
		else
			break ;
		l = 0;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		count;
	int		j;
	char	*temp;

	j = 0;
	count = 0;
	while (s1[count] != '\0')
		count++;
	start = ft_start(s1, set);
	end = ft_end(s1, set, count - 1) + 1;
	if (!s1)
		return (NULL);
	temp = malloc(sizeof(char) * (end - start + 1));
	if (temp == 0)
		return (NULL);
	printf("%d\n", start);
	printf("%d\n", end);
	while (start < end)
	{
		temp[j] = s1[start];
		start++;
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

int main()
{
    char str[] = "abcHelloabcWorldabc";
    char set[] = "abc";
    char *arr;
    arr = ft_strtrim(str, set);
    printf("%s", arr);
    free(arr);
    return(0);
}
