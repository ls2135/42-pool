#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main()
{
	ft_print_reverse_alphabet();
}

void ft_print_reverse_alphabet(void)
{
	write(1,"zyxwvutsrqponmlkjihgfedcba",26);
}
