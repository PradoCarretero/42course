/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:56 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src_s;
	char	*dst_s;

	src_s = (char *)src;
	dst_s = (char *)dst;
	if (!src_s && !dst_s)
		return (0);
	i = 0;
	if (dst_s > src_s)
	{
		while (len-- > 0)
		{
			dst_s[len] = src_s[len];
		}
	}
	else
	{
		while (i < len)
		{
			dst_s[i] = src_s[i];
			i++;
		}
	}
	return (dst);
}

// int   main(void)
// {
//    char dst[50] = "hgfd";
//    char src[] = "ca";
//    char *result;
//    result = ft_memmove(dst, src, 3);
//    printf("%s\n", result);
//    printf("%s\n", memmove(dst, src, 3));
//    return (0);
// }
