#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
	char letter1;
	char letter2;

	letter1 = 'a';
	letter2 = 'z';

	while(letter1 <= letter2)
	{
		ft_putchar(letter2);
		letter2--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
    ft_putchar('\n');

	return 0;
}

