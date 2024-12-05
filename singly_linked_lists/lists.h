#ifndef  MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
typedef struct list_t{
	char *str;
	unsigned int len;
	struct list_t *next;
}
size_t print_list(const list_t *h);
#endif
