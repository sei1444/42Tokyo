/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:57:41 by marvin            #+#    #+#             */
/*   Updated: 2023/06/02 14:41:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int sign;
    char c;

    sign = 1;
    if (n == INT_MIN)
    {
        write(fd, "-2147483648", 11);
        return (0);
    }
    else if (n < 0)
    {
        n *= -1;
        write(fd, "-", 1);
    }
    if (n >= 10)
        ft_putnbr(n /= 10);
    c = (n % 10) + '0';
    write(fd, &c, 1);
}
