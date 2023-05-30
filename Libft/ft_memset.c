/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:03:11 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 15:12:43 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
	unsigned char *p;

	p = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
