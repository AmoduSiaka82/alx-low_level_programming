#ifndef _POINTERS_H
#define _POINTERS_H
typedef __SIZE_TYPE__ size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
_putchar(c char);
#endif
