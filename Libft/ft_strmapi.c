/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:52:13 by marvin            #+#    #+#             */
/*   Updated: 2023/06/01 21:17:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    int n;
    char *ptr;

    n = ft_strlen(s);
    ptr = malloc(sizeof(char) * (n + 1));
    if (ptr == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    return (ptr);
}
