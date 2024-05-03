/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:16:36 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/23 10:17:30 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOKS_H
# define HOOKS_H

int	loop_hook(t_vars *vars);
int	key_hook(int keycode, t_vars *vars);
int	mouse_hook(int mousecode, int x, int y, t_vars *vars);

#endif
