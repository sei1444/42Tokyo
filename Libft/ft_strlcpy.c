/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:43:23 by seono             #+#    #+#             */
/*   Updated: 2023/05/20 18:11:38 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
    while (*s != '\0')
	{
		i ++;
		s++;
	}
	return (i);
}

size_t strlcpy(char *dest, const char *src, size_t n)
{
	while (n - 1 > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ft_strlen(src));
}