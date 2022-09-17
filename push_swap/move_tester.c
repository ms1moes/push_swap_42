#include "push_swap.h"

t_list *create_node(int info)
{
	t_list *result = malloc(sizeof(t_list));
	result->info = info;
	result->next = NULL;
	return result;
}

void printlist(t_list *a)
{
	t_list *tmp = a;

	while (tmp != NULL)
	{
		printf("%d | ", tmp->info);
		tmp = tmp->next;
	}
	printf("\n\n");
	
}

int main()
{
	t_list *a = NULL;
	t_list *b = NULL;
	t_list *tmp;
	t_list *tmp2;

	//stack A
	tmp = create_node(3);
	a = tmp;
	tmp = create_node(1);
	tmp->next = a;
	a = tmp;
	tmp = create_node(2);
	tmp->next = a;
	a = tmp;
    tmp = create_node(5);
	tmp->next = a;
	a = tmp;

	//stack B
	tmp2 = create_node(6);
	b = tmp2;
	tmp2 = create_node(7);
	tmp2->next = b;
	b = tmp2;
	tmp2 = create_node(4);
	tmp2->next = b;
	b = tmp2;
    printf("list a: ");
    printlist(a);
    invrotate_a(&a);
    printf("list a: ");
	printlist(a);

}