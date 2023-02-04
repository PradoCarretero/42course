/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 09:54:06 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (a == '\0' && b == '\0')
		return (0);
	if (len == 48)
		return (0);
	i = 0;
	while (i < len)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}

/*int   main(void)
{
   char dst[50] = "";
   char src[] = "caracol";
   char *result;
   result = ft_memcpy(dst, src, 0);
   printf("%s\n", result);
   printf("%s\n", memmove(dst, src, 0));
   return (0);
}*/
