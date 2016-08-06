/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:36:05 by mzhong            #+#    #+#             */
/*   Updated: 2016/07/16 18:23:29 by mzhong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_count = 0;

int		is_valid(int *board, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[col] == board[i] || col - i == board[col] - board[i])
			return (0);
		if (col - i == board[i] - board[col])
			return (0);
		i++;
	}
	return (1);
}

void	place_queens(int *board, int col)
{
	int i;

	i = 0;
	if (col == 8)
	{
		g_count++;
		return ;
	}
	while (i < 8)
	{
		board[col] = i;
		if (is_valid(board, col))
		{
			place_queens(board, col + 1);
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int board[8];

	place_queens(board, 0);
	return (g_count);
}
