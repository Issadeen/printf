#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* _printf - Custom printf function
* @format: Format string
*
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int count;

va_start(args, format);
count = vprintf(format, args);
va_end(args);

return (count);
}
