/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madida <madida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:43:24 by madida            #+#    #+#             */
/*   Updated: 2025/11/27 17:10:19 by madida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *src2;
    unsigned char   *dest2;
    size_t  i;

    src2 = src;
    dest2 = dest;
    i = 0;
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest2);
}
