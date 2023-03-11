/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:20:08 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:16 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*to_find;
	char	*str;
	size_t	i;
	size_t	j;

	to_find = (char *)needle;
	str = (char *)haystack;
	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
