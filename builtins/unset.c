/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:36:06 by mflury            #+#    #+#             */
/*   Updated: 2023/11/02 16:57:36 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	builtin_unset(char **argv, t_ctx *ctx)
{
	int		i;
	int		pos;

	pos = -1;
	i = 1;
	while (argv[i])
	{
		pos = (int)grpvar_has(ctx->grpvar, GRPVAR_GLOBAL, argv[i]);
		if (pos >= 0)
			grpvar_remove(ctx->grpvar, GRPVAR_GLOBAL, pos);
		i++;
	}
	return (0);
}
