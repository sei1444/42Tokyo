/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:06:48 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 16:34:37 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (n > 0)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
        n--;
    }
    return (*str1 - *str2);
}
