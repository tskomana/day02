#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_alphabet(void)
{
	char letteri;
	char letterj;

	letteri = 'a';
	letterj = 'z';
	 
	while(letteri <= letterj)
	{
		ft_putchar(letteri);
		letteri++;
	};
}
int main()
{

	ft_print_alphabet();
	ft_putchar('\n');

	return 0;
}

