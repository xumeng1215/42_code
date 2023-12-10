/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <yiuwong@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:09:05 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/09 02:27:47 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H

typedef int	(t_op_func)(int, int);

int	add(int a, int b);
int	subtract(int a, int b);
int	multiply(int a, int b);
int	divide(int a, int b);
int	modulo(int a, int b);

#endif
