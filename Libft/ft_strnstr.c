/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:00 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 16:35:08 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t s2_len;

    s2_len = ft_strlen(s2);
    while (*s1 != '\0' && n >= s2_len)
    {
        if (ft_strncmp(s1, s2, s2_len) == 0 )
            return (s1);
        s1++;
        n--;
    }
    return (NULL);
}
