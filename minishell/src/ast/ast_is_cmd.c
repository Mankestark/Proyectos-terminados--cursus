/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_is_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:45:25 by jmorillo          #+#    #+#             */
/*   Updated: 2023/08/27 15:39:36 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ast.h"

int	ast_is_cmd(t_astree *node)
{
	return (node && node->cmd != NULL && node->type == command_tkn);
}
