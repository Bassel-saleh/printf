#include "main.h"
#include <stdarg.h>
/**
 */
int print_str(va_list var) {
    char *str = va_arg(var, char *);
    int count = 0;

    while (str && *str) {
        count += _putchar(*str);
        str++;
    }

    return count;
}
