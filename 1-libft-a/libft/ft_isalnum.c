/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:09 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int i)
{
	if (!(('A' <= i && 'Z' >= i)
			|| ('a' <= i && 'z' >= i) || ('0' <= i && '9' >= i)))
		return (0);
	else
	{
		return (1);
	}
}

// int   main(void)
// {
//    char result;
//    result = ft_isalnum('l');
//    printf("%d", result);
//    return (0);
// }
