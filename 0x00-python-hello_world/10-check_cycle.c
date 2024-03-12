#include "list.h"
/**
 * check_cycle - checks for linked list
 * @list: the linked list to be checked
 * Return: 1 if linked list is found, 0 if not
 */

int check_cycle(listin_t *list)
{
	listint_t *slow = list;
	list_t *fast = list;

	if (!list)
		return(0);

	while (slow && fast && fast ->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow ==fast)
			return(1);

	}

	return (0);
}
