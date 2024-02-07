#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[20];
	int		temp;
	int		length;

	temp = nb;
	length = 0;
	while (temp != 0)
	{
		temp /= 10;
		length++;
	}
	if (length == 0)
	{
		str[0] = '0';
		length = 1;
	}
	temp = length;
	while (temp > 0)
	{
		str[temp - 1] = '0' + nb % 10;
		nb /= 10;
		temp--;
	}
	str[length] = '\0';
	write(1, str, length);
}

