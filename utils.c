/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:58:35 by lray              #+#    #+#             */
/*   Updated: 2023/08/06 22:01:10 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	clean_split(char **splitted_arr)
{
	size_t	i;

	i = 0;
	while (splitted_arr[i])
		free(splitted_arr[i++]);
	free(splitted_arr);
}
