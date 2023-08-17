#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>  /* Include the standard library header for NULL */

/* Function prototype for the _putchar function */
int _putchar(char c);

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_opcodes(char *main_ptr, int num_bytes);

#endif /* FUNCTION_POINTERS_H */
