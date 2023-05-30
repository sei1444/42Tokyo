/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:05:09 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 19:56:53 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char con;
	char *str;

	con = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == con)
			return (str);
		str++;
	}
	return (NULL);
}
