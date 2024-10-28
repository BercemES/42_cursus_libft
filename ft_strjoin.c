/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:22:18 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/22 16:17:21 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l_s1;
	int		l_s2;
	char	*str;
	int		i;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	i = 0;
	str = (char *) malloc (sizeof(char) * ((l_s1 + l_s2) + 1));
	if (str == NULL)
		return (NULL);
	while (i < l_s1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while ((l_s1 + i) < (l_s1 + l_s2))
	{
		str[l_s1 + i] = s2[i];
		i++;
	}
	str[(l_s1 + l_s2)] = '\0';
	return (str);
}
