/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:32:31 by imatouil          #+#    #+#             */
/*   Updated: 2024/11/09 17:14:55 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_ttolower(unsigned int index, char *s)
// {
// 	if (*s >= 'A' && *s <= 'Z')
// 		*s += 32;
// }

// void	ft_ttoupper(unsigned int index, char *s)
// {
// 	if (*s >= 'a' && *s <= 'z')
// 		*s -= 32;

// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// int	main()
// {
// 	char s[] = "HELLO";
// 	int i = 0;
// 	void (*f[])(unsigned int, char*) = {ft_ttolower, ft_ttoupper};
// 	while (i < 2)
// 	{
// 		ft_striteri(s, f[i]);
// 		printf("%s\n", s);
// 		i++;
// 	}
	
// }