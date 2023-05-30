/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:06:48 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 19:29:24 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    // if (n == 0)
    //     return (0);
	i = 0;
    while (i < n)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
        i++;
    }
    return (0);
}
