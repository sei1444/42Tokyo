/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:04:09 by seono             #+#    #+#             */
/*   Updated: 2023/05/20 18:04:10 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *t;
	size_t i;

	i = n;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i > 0)
	{
		*t = *s;
		t++;
		s++;
		i--;
	}
	t -= n; 
	while (n > 0)
	{
		*d = *t;
		d++;
		t++;
		n--;
	}
	return (dest);
}
