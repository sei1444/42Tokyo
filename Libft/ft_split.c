/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/06/07 19:39:05 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlength(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	while (s[i] == c)
		i++;
	count = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static char	*getstring(char const *s, int start, int end)
{
	int		i;
	char	*tmpptr;

	tmpptr = malloc(sizeof(char) * (end - start + 1));
	if (tmpptr == NULL)
		return (NULL);
	if (start == end)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		tmpptr[i] = s[start + i];
		i++;
	}
	tmpptr[i] = '\0';
	return (tmpptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		start;
	char	**arrptr;

	if (s == NULL)
		return (NULL);
	arrptr = malloc(sizeof(char *) * (getlength(s, c) + 1));
	if (arrptr == 0)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		arrptr[count] = getstring(s, start, i);
		count++;
	}
	arrptr[count] = NULL;
	return (arrptr);
}
