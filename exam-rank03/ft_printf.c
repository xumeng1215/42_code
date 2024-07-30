#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int ft_printf(char *str, ...);

int main(void)
{
    int i = 5;
    ft_printf("int i is %d\n", i);
}

int ft_printf(char *str, ...)
{
    
}