#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int data[1000];
	int size;
}	t_stack;

// 操作の関数
void	sa(t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);

#endif