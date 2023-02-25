/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mega_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:11:07 by aikram            #+#    #+#             */
/*   Updated: 2023/02/25 14:54:53 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_sta(t_ps *ps, int *shift)
{
	int	i;

	i = -1;
	while (++i < ps->l)
	{
		if ((ps->sta[ps->a] >> shift[1]) & 1)
			rot(ps->sta, ps->l, ps->a, 'a');
		else
			push_b(ps);
	}
}

void	clr_stb(t_ps *ps)
{
	int	i;

	i = ps->b - 1;
	while (++i < ps->l)
		push_a(ps);
}

void	sortz(t_ps *ps, int l)
{
	int	amt[2];
	int	i[2];

	amt[0] = l;
	amt[1] = 0;
	while (amt[0] > 0)
	{
		amt[0] >>= 1;
		amt[1]++;
	}
	ps->l = l;
	i[1] = -1;
	i[0] = 0;
	while (i[0] < amt[1])
	{
		++i[1];
		i[0]++;
		sort_sta(ps, i);
		clr_stb(ps);
	}
}

void	big_boi(t_ps *ps, int l)
{
	ps->stb = (int *)ft_calloc(l, sizeof(int));
	ps->b = l;
	ps->a = 0;
	indexer(ps, l);
	sortz(ps, l);
}
