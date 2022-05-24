#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/ elements (length) in lis
 */

 size_t list_len(const list_t *h)
 {
          size_t heri = 0;

          while (h != NULL)
          {
                    heri++;
                    h =h->next;
          }

          Return (heri);
 }