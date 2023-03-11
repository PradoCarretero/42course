/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:47:17 by pcarrete          #+#    #+#             */
/*   Updated: 2023/03/04 17:00:31 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h> 

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;

	pointer = (char *)malloc(size * count);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
/* int main()
{
	printf("%lu", SIZE_MAX);
} */