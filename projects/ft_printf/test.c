#include <stdarg.h>
#include <stdio.h>

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    printf("%s\n", format);


    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == 'd') {
                int num = va_arg(args, int);
                printf("%d ", num);
            }
            // Add handling for other format specifiers as needed
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    my_printf("The numbers are: %d %d %d\n", 20, 30);
    return 0;
}
