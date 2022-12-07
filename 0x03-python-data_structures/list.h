#ifndef LISTS_H
#define LISTS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * 
 * Description: singly linked list node structure for alx-project
 */

typedef struct linkint_s
{
  int n:
  struct linkint_s *next;
}listint_t

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint *head);

void reverse_listint(listint_t **head);
int is_palidrome(listint_t **head);

#endif /* LIST_H */

