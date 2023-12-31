/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:12:24 by mflury            #+#    #+#             */
/*   Updated: 2023/11/02 17:19:35 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	builtin_exit(char **argv, t_ctx *ctx)
{
	(void) argv;
	printf("exit\n");
	if (argv)
	{
		if (argv[1] || argv[2])
		{
			g_code = 2;
			ft_puterror("exit: too many arguments");
			return (1);
		}
	}
	clear_history();
	ctx_free(ctx);
	exit(g_code);
}
