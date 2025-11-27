/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madida <madida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:08:31 by madida            #+#    #+#             */
/*   Updated: 2025/11/27 19:11:24 by madida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest2;
    unsigned const char *src2;
    size_t i;

    if (dest == src || n == 0)
        return (dest);
    dest2 = dest;
    src2 = src;
    i = 0;
    if (dest2 > src2)
    {
        dest2[i] = src2[i];
        i--;
    }
    if (i < n)
        ft_memcpy(dest2, src2, 6);
    return (dest2);
}

int main()
{
    char dest[] = "";
    char src[] = "ciao come stai";
    ft_memmove(dest, src, 6);
    printf("%s\n", dest);
}