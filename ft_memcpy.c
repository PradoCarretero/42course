/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/25 20:36:29 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (!a && !b)
		return (NULL);
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}

// int   main(void)
// {
//    char dst[50] = "";
//    char src[] = "caracol";
//    char *result;
//    result = ft_memcpy(dst, src, 0);
//    printf("%s\n", result);
//    printf("%s\n", memcpy(dst, src, 0));
//    return (0);
// }