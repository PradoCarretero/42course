/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/24 10:55:06 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	char	*str_src;

	str_src = (char *)src;
	src_len = ft_strlen(str_src);
	i = 0;
	if (dstsize == 0)
	{
		return (src_len);
	}
	while (str_src[i] && i < dstsize -1)
	{
		dst[i] = str_src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int main(void)
// {
//     char dst[50] = "";
//    char src[] = "caracol";
//    char *result;
//    printf("ft_strlcpy %lu\n", ft_strlcpy(dst, src, 50));
//    //printf("original %lu\n", strlcpy(dst, src, 50));
//    return (0);
// }
