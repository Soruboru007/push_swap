#include "push_swap.h"
#include <unistd.h>

void	sa(t_stack *a)
{
    //エラーチェック
	if (a->size < 2)
		return;
    //処理
	int tmp = a->data[0];
	a->data[0] = a->data[1];
	a->data[1] = tmp;
    //ログ
	write(1, "sa\n", 3);
}

