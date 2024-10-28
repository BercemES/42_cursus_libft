/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:00:55 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/21 12:31:38 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst,
			const char *src, size_t dstsize)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	j;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (ld >= dstsize)
		return (dstsize + ls);
	j = 0;
	while (src[j] != '\0' && ld + j < dstsize -1)
	{
		dst[ld + j] = src[j];
		j++;
	}
	dst[ld + j] = '\0';
	return (ld + ls);
}
