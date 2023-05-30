/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:36:48 by marvin            #+#    #+#             */
/*   Updated: 2023/05/28 22:56:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *ptr;

    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
