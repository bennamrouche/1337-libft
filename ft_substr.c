/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <ebennamr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:34:46 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/16 13:19:32 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*p;

	p = (char *)(malloc(len + 1));
	j = 0;
	if (!p || !s)
		return (0);
	while (s[start] && j < len && start < ft_strlen(s))
	{
		p[j] = s[start];
		j++;
		start++;
	}
	p[j] = '\0';
	return (p);
}