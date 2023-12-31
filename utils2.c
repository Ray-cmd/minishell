/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:16:41 by lray              #+#    #+#             */
/*   Updated: 2023/10/31 21:17:10 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	arr_show(char **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr[i])
			printf("%s\n", arr[i++]);
	}
}

int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
