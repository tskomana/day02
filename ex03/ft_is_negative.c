#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c);

void ft_is_negative(int n)
{
	
	
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}

}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	ft_is_negative(-3);

	return 0;
}
