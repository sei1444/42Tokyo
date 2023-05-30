/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:05:55 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 16:34:34 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    unsigned char ch;
    unsigned char *str;

    ch = (unsigned char)c;
    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (*str == ch)
            return ((void *)str);
        i++;
        str++; 
    }
    return (NULL);
}
