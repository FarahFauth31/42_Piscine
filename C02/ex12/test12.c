#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	change_base_num(unsigned long long nb, int len, char *base)
{
	int	rest;
	int	num_base;

	if (nb > (len - 1))
	{
		change_base_num(nb / len, len, base);
	}
	rest = (nb % len);
	num_base = base[rest];
	write(1, &num_base, 1);
	return ;
}

void	print_str_hex(unsigned char *ptr, int divsize)
{
	unsigned long long	a;
	int					i;

	i = 0;
	while (i < divsize)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		a = *(ptr + i);
		if (a < 16)
			write(1, "0", 1);
		change_base_num(a, 16, "0123456789abcdef");
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "    ", 4);
		i += 2;
	}
}

void	print_str(unsigned char *ptr, int divsize)
{
	unsigned char		*temp;
	unsigned long long	a;
	int					i;

	i = 0;
	write(1, " ", 1);
	while (i < divsize)
	{
		if (ptr[i] < 32 || ptr[i] > 126)
			write(1, ".", 1);
		else
			write(1, &ptr[i], 1);
		i++;
	}
}

void	print_address(unsigned long long addr)
{
	unsigned long long	temp;
	int					div;

	temp = addr;
	div = 0;
	while (div < 14)
	{
		temp /= 16;
		if (temp < 16)
			write(1, "0", 1);
		div++;
	}
	change_base_num(addr, 16, "0123456789abcdef");
	return ;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned int	divsize;

	i = 0;
	ptr = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			divsize = 16;
		else
			divsize = size % 16;
		print_address((unsigned long long)ptr + (i * 16));
		write(1, ":", 1);
		print_str_hex(ptr + (i * 16), divsize);
		print_str(ptr + (i * 16), divsize);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

int main() {
	char array[35] = "holâ soy como tu\n pero \t mas cute";
	ft_print_memory(array, sizeof(array));
	return 0;
}