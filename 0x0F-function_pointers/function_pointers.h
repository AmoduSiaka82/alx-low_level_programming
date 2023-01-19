#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
typedef __SIZE_TYPE__ size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int putchar(int char);
#endif
