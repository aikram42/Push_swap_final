/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:37:57 by aikram            #+#    #+#             */
/*   Updated: 2023/02/25 14:54:34 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define ERR_DUP "Error: duplicates not allowed\n"
# define ERR_ARG "Error: BAD ARGUMENT!\n"
# define INV_ARG "Error: Invalid arguments\n"
# define ERR_SZE "Error: number must be of integer type\n"

typedef struct t_ps {
	int	*ints;
	int	*stb;
	int	*sta;
	int	a;
	int	b;
	int	mdp;
	int	pdp;

	int	bad_no;
	int	l;

	int	prh;
	int	ph;
	int	p;

	int	up;
	int	upos;
	int	dn;
	int	dpos;

}	t_ps;

void	push_swap(t_ps *ps, int l);

/* Utils */
char	**ft_split(char const *s, char c);
int		giga_chad_atoi(char *str, t_ps *ps);
void	*ft_calloc(size_t count, size_t size);
void	chkr_dup(int *i, t_ps *ps);
void	freep(t_ps *ps, char *err);

/* Operations */
void	push_a(t_ps *ps);
void	push_b(t_ps *ps);
void	swap(int *a, int *b, char ab);
void	rot(int *a, int l, int start, char ab);
void	rrot(int *a, int l, int start, char ab);
void	repeat(int *a, int l, int s, int r);
void	rrepeat(int *a, int l, int s, int rr);

/* Sort functions */
int		*two(int *a);
void	three(int *a, int l, int i);
void	four(int *a, int l, int i);
void	five(int *a, int l, int i);

void	clr_stb(t_ps *ps);
void	sort_sta(t_ps *ps, int *i);
void	sortz(t_ps *ps, int l);

void	big_boi(t_ps *ps, int l);

void	indexer(t_ps *ps, int l);
void	dp_one(t_ps *ps, int l);
void	dp_two(t_ps *ps, int l);

#endif