#ifndef LISTS_H
#define LISTS_H
/**
 *struct listint_s - single linked list
 *@n: integer
 *@next: points to the next node
 *
 *Description: single linked list node struct
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


#endif
