/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:40:25 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 12:13:28 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

# include <structs.h>

# define ZOOM_MULTIPLIER 0.15
# define MOVE_MULTIPLIER 0.2
# define ESCAPE_KEYCODE 53
# define UP_ARROW 126
# define DOWN_ARROW 125
# define LEFT_ARROW 123
# define RIGHT_ARROW 124
# define SCROLL_UP 4
# define SCROLL_DOWN 5

void	handle_zoom(int mousecode, t_vars *vars);
void	handle_movement(int keycode, t_vars *vars);
int		exit_cleanly(t_vars *vars);

#endif
