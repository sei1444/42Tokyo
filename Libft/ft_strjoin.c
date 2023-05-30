/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:36:12 by marvin            #+#    #+#             */
/*   Updated: 2023/05/29 11:51:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int ptrSize;
    char *ptr;

    ptrSize = ft_strlen(s1) + ft_strlen(s2);
    ptr = malloc(sizeof(char) * (ptrSize + 1));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        ptr[i + j] = s2[j];
        j++;
    }
    ptr[i + j] = '\0';
    return (ptr);
}
