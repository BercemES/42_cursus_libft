/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:02:33 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/21 16:22:18 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lneedle;

	i = 0;
	lneedle = ft_strlen(needle);
	if (lneedle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		if (i + lneedle > len)
			break ;
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (j == lneedle)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
