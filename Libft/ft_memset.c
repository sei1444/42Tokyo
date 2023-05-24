/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 08:17:52 by marvin            #+#    #+#             */
/*   Updated: 2023/05/21 18:31:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	while (n > 0)
	{	
		*p = (unsigned char *)c;
		p++;
		n--;
	}
	return (s);
}
