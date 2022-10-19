/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:36:00 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/13 21:31:54 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int x, size_t n)
{
	size_t					i;
	unsigned char			*pt;

	pt = (unsigned char *)s;
	i = 0 ;
	while (i < n)
	{
		if (*(pt + i) == (unsigned char)x)
			return (pt + i);
		i++;
	}
	return (NULL);
}
