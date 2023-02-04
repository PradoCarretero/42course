/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:20 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isdigit(int i)
{
	if (!('0' <= i && '9' >= i))
		return (0);
	else
	{
		return (1);
	}
}

// int   main(void)
// {
//    char result;
//    result = ft_isdigit('1');
//    printf("%d", result);
//    return (0);
// }
