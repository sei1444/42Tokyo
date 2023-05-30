/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:40 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 15:09:32 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    char *ptr;
    int memorySize;

    memorySize = nmemb * size;
    ptr = malloc(memorySize);
    if (ptr != NULL)
        ft_memset(ptr, 0, memorySize);
    return (ptr);
}
