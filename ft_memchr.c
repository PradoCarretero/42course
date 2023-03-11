/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:17:18 by pcarrete          #+#    #+#             */
/*   Updated: 2023/03/04 15:56:32 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_str;
	size_t			i;

	s_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_str[i] == (unsigned char)c)
			return (&s_str[i]);
		i++;
	}
	return (NULL);
}
