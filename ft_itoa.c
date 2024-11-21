/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabderra <sabderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:03:14 by sabderra          #+#    #+#             */
/*   Updated: 2024/11/04 12:00:35 by sabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nb)
{
	int	x;

	x = 0;
	if (nb == -2147483648)
		return (11);
	else if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb = -nb;
		x++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*s;

	nb = n;
	len = ft_len(n);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	len--;
	if (nb == 0)
		s[len] = nb + 48;
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (s);
}
