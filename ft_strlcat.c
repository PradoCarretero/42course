/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:44:13 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/24 14:32:36 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	j;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = 0;
	while (dst[len_dst] && len_dst < dstsize)
	{
		len_dst++;
	}
	j = 0;
	while (src[j] && (len_dst + j + 1) < dstsize)
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	if (len_dst < dstsize)
		dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}
