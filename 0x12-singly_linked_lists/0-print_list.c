#include "lists.h"

size_t print_list(const list_t *h) {
  const list_t *cursor = h;
  size_t count = 0;

  while (cursor != NULL) {
    char *str = cursor->str;
    int len = cursor->len;

    if (str != NULL) {
      printf("[%d] %s\n", len, str);
    } else {
      printf("[0] (nil)\n");
    }
    count += 1;
    cursor = cursor->next;
  }

  return count;
}
