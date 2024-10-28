/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:04:38 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/24 07:55:04 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		s_len;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = 0;
	s_len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (s_len > i && ft_strchr(set, s1[s_len - 1]) != NULL)
		s_len--;
	if (s_len < i)
		return (ft_strdup(""));
	str = ft_substr(s1, i, (s_len - i));
	return (str);
}
