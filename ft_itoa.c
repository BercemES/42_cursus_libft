/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:28:33 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/26 13:59:55 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_digit(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_special(char *str, int n)
{
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	ft_strlcpy(str, "0", 2);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		l;

	digit = ft_digit(n);
	l = digit;
	str = (char *)malloc((digit + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648 || n == 0)
		ft_special(str, n);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[digit - 1] = (n % 10) + 48;
		n = n / 10;
		digit--;
	}
	str[l] = '\0';
	return (str);
}
