/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:05:37 by seono             #+#    #+#             */
/*   Updated: 2023/06/03 22:00:40 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	if (i < n)
		return (((unsigned char)s1[i] - (unsigned char)s2[i]));
	return (0);
}

//null処理をせずにテスターをOKにしたいやつ

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     size_t i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
// 	{
// 		if (s1[i] != s2[i])
// 			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
// 		i++;
// 	}
// 	if (i < n)
// 		return (((unsigned char)s1[i] - (unsigned char)s2[i]));
// 	return (0);
// }