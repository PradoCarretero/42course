/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:33:56 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/24 11:43:07 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_str;

	s_str = s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		s_str[i] = 0;
		i++;
	}
}
