/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:00 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 15:22:56 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t s2_len;
	char *str1;

    s2_len = ft_strlen(s2);
	str1 = (char *)s1;
    while (*str1 != '\0' && n >= s2_len)
    {
        if (ft_strncmp(str1, s2, s2_len) == 0 )
            return (str1);
        str1++;
        n--;
    }
    return (NULL);
}
