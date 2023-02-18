/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:05:12 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/18 11:39:05 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int	i;
	char	*pointer;

	pointer = malloc(sizeof(char) * (ft_strlen(s)));
	if(!pointer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pointer[i] = f(i, s[i]);
		i++;
	}

}