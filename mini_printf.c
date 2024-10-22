/*
** EPITECH PROJECT, 2024
** Mini printF
** File description:
** Premier projet Epitech
*/

#include <stdio.h>
#include <stdarg.h>

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);


void cheker(char flag, va_list ap)
{
    int d;
	int i;
    char c;
    char *s;

    switch (flag) {
    case 's':
        s = va_arg(ap, char*);
        my_putstr(s);
        break;
    case 'd':
        d = va_arg(ap, int);
        my_put_nbr(d);
        break;
	case 'i':
    	i = va_arg(ap, int);
        my_put_nbr(i);
        break;
    case 'c':
        c = (char) va_arg(ap, int);
        my_putchar(c);
        break;
    default:
        my_putchar('%');
        break;
    }
}

int mini_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int i = 0;

    while (format[i])
    {
        if (format[i] == '%') {
            i++;
            cheker(format[i], ap);
        } else {
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return 0;
}
