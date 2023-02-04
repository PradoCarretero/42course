/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/18 13:15:41 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int i)
{
	if (!(('A' <= i && 'Z' >= i)
			|| ('a' <= i && 'z' >= i)))
		return (0);
	else
	{
		return (1);
	}
}

// int   main(void)
// {
//    char result;
//    result = ft_isalpha('a');
//    printf("%d", result);
//    return (0);
// }
