#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
    if (format == NULL)
        return (-1);

    va_list args;
    va_start(args, format);

    int printed_chars = 0;
    char buffer[BUFF_SIZE];
    int buff_ind = 0;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE) {
                print_buffer(buffer, &buff_ind);
            }
            printed_chars++;
        } else {
            i++;
            int flags = get_flags(format, &i);
            int width = get_width(format, &i, args);
            int precision = get_precision(format, &i, args);
            int size = get_size(format, &i);
            int printed = handle_print(format, &i, args, buffer, flags, width, precision, size);
            if (printed == -1) {
                print_buffer(buffer, &buff_ind);
                va_end(args);
                return (-1);
            }
            printed_chars += printed;
        }
    }
    print_buffer(buffer, &buff_ind);
    va_end(args);

    return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0) {
        write(STDOUT_FILENO, buffer, *buff_ind);
    }
    *buff_ind = 0;
}

