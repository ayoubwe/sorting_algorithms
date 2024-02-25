#include "sort.h"
/**
 * insertion_sort_list - insertion of sort
 * @list: doble the list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i;
	listint_t *j;
	listint_t *key;

	if (!list)
		return;
	i = *list;
	i = i->next;
	while (i)
	{
		key = i;
		j = i->prev;
		while (j && j->n > key->n)
		{
			listint_t *tempP = j->prev;
			listint_t *tempN = key->next;

			if (tempP != NULL)
			{
				tempP->next = key;
			}
			else
			{
				*list = key;
			}
			key->prev = tempP;
			key->next = j;
			j->prev = key;
			j->next = tempN;
			if (tempN != NULL)
			{
				tempN->prev = j;
			}
			print_list(*list);
			j = key->prev;
		}
		i = i->next;
	}
}

