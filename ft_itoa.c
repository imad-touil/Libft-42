/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:30 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/03 16:58:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*my_helper(char *t, int nbr, int len)
{
	t[len] = '\0';
	if (nbr == 0)
	{
		t[0] = '0';
		return (t);
	}
	if (nbr < 0)
	{
		t[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		t[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (t);
}

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*t;

	if (nbr == -2147483648)
	{
		t = (char *)malloc(12 * sizeof(char));
		if (!t)
			return (NULL);
		ft_memcpy(t, "-2147483648", 12);
		return (t);
	}
	len = 0;
	n = nbr;
	if (nbr <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (NULL);
	return (my_helper(t, nbr, len));
}
