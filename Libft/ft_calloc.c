/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:40 by seono             #+#    #+#             */
/*   Updated: 2023/05/30 20:23:14 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;
    size_t memorySize;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
    memorySize = nmemb * size;
    ptr = malloc(memorySize);
    if (ptr != NULL)
        ft_memset(ptr, 0, memorySize);
    return (ptr);
}
