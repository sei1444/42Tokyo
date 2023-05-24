/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:02:39 by seono             #+#    #+#             */
/*   Updated: 2023/05/20 18:02:45 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (dest = src)
		return NULL;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
