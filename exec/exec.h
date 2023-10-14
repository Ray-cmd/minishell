/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:18:47 by lray              #+#    #+#             */
/*   Updated: 2023/10/14 15:48:08 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H

# include <sys/wait.h>
# include <sys/stat.h>

int			exec(t_ctx *ctx);
char		*get_cmd_path(char *cmd, t_grpvar *grpvar);
t_dynarrstr	*make_argv(t_dyntree *root);
int			open_file_rd(char *path);
int			open_file_wr(char *path);
int			open_file_wra(char *path);
int			get_infd(t_dyntree *root);
int			get_outfd(t_dyntree *root);

#endif
