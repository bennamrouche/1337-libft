/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:20:14 by ebennamr          #+#    #+#             */
/*   Updated: 2022/10/06 13:42:14 by ebennamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int x)
{
	if (x <= 'Z' && x >= 'A')
		return (x + 32);
	else
		return (x);
}
