#include "lists.h"
/**
* check_cycle -  function in C that checks if a singly linked list has a cycle in it.
* @list: pointer to linked list
* Return: 0 if there is no cycle, 1 if there is a cycle
* Only these functions are allowed: write, printf, putchar, puts, malloc, free
*/
int check_cycle(listint_t *list)
{
	listint_t *list1 = list, *list2 = list;

	if (list == NULL)
		return (0);
	while (list2 != NULL && list2->next != NULL && list2->next->next != NULL)
	{
		list1 = list1->next;
		list2 = list2->next->next;
		if (list1 == list2)
			return (1);
	}
	return (0);
}
