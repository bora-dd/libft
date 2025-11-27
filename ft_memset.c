/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madida <madida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:25:10 by madida            #+#    #+#             */
/*   Updated: 2025/11/27 17:10:32 by madida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t	i;

	new = s;
	i = 0;
	while (i < n)
	{
	   new[i] = c;
	   i++; 
	}
	return (s);
}
