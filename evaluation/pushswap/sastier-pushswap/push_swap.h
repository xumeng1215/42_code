/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:13:13 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/17 12:13:15 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/ft_printf.h"
# include "get_next_line.h"

typedef struct s_node
{
	int				data;
	int				pos;
	int				value;
	int				ref_in_a;
	int				pos_temp;
	int				above_median;
	int				change;
	struct s_node	*next;
}					t_node;

typedef struct s_array
{
	t_node	*ref1;
	t_node	*ref2;
	int		total;
}			t_array;

t_node		*create_stack(char **av, int ac);
long long	ft_atol(const char *str);
int			basic_verif(t_node *a, long long value, int pos);
int			av_empty(char **av);

//checkers
int			ft_select_instruction(char *line, t_node **a, t_node **b);

//node_op
void		ft_lstprint(t_node *lst);
int			ft_lstsize_node(t_node *lst);
t_node		*ft_find_last(t_node *a);
t_node		*ft_find_second_last(t_node *a);
int			ft_stack_sorted(t_node *a);
t_node		*ft_find_smallest(t_node *a);
t_node		*ft_find_2nd_smallest(t_node *a);
t_node		*ft_find_biggest(t_node *a);
void		assign_pos(t_node *a, t_node *b);
t_node		*ft_find_smallest_value(t_node *a);
t_node		*ft_find_corr(t_node *a, int data);
int			find_best_value(t_node **st_a, t_node *a, t_node *b);

//clear
void		ft_clear_all(t_node **a, t_node **b, char **av, int ac);

//possible operations
void		sa(t_node **a, int count);
void		sb(t_node **b, int count);
void		ss(t_node **a, t_node **b, int count);
void		pb(t_node **a, t_node **b, int count);
void		pa(t_node **a, t_node **b, int count);
void		ra(t_node **a, int count);
void		rb(t_node **b, int count);
void		rr(t_node **a, t_node **b, int count);
void		rra(t_node **a, int count);
void		rrb(t_node **b, int count);
void		rrr(t_node **a, t_node **b, int count);

//sort function
void		small_sort(t_node **a);
void		big_sort(t_node **a, t_node **b);
void		first_step(t_node **a, t_node **b);
void		first_step_bis(t_node **a, t_node **b);
void		change_data(t_node **a);

//relate to 2nd struct
t_array		*find_best_array(t_node *a, int size);
void		is_best(t_node *a, t_array *ref, int size);
int			preview(int first, t_node *a, int size);

#endif
