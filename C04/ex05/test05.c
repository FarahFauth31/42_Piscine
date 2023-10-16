#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <unistd.h>

int	ft_baselen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str = (str + 1);
	}
	return (count);
}

int	ft_base_change(char *str, char *base, int str_count, int base_len)
{
	int	temp;
	int	count;
	int	pos;

	temp = 0;
	while (str[str_count] != '\0')
	{
		count = 0;
		pos = 0;
		while (count < base_len)
		{
			if (str[str_count] == base[count])
			{
				temp = temp * base_len + count;
				pos = 1;
			}
			count++;
		}
		if (pos == 0)
			return (temp);
		str_count++;
	}
	return (temp);
}

int	ft_errors(char *base, int len)
{
	int	str_count;
	int	str_count2;

	if (len < 2)
		return (1);
	str_count2 = 0;
	if (base == NULL)
		return (1);
	while (base[str_count2] != '\0')
	{
		str_count = str_count2 + 1;
		if (base[str_count2] == '+' || base[str_count2] == '-')
			return (1);
		while (base[str_count] != '\0')
		{
			if (base[str_count2] == base[str_count])
			{
				return (1);
			}
			str_count++;
		}
		str_count2++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	count_sign;
	int	base_len;
	int	temp;
	int	str_count;
	int	err;

	count_sign = 1;
	base_len = ft_baselen(base);
	str_count = 0;
	err = ft_errors(base, base_len);
	if (err == 1)
		return (0);
	while (str[str_count] == 32 || str[str_count] == '\f'
		|| str[str_count] == '\n' || str[str_count] == '\r'
		|| str[str_count] == '\t' || str[str_count] == '\v')
		str_count++;
	while (str[str_count] == '+' || str[str_count] == '-')
	{
		if (str[str_count] == '-')
			count_sign = count_sign * (-1);
		str_count++;
	}
	temp = ft_base_change(str, base, str_count, base_len);
	return (temp * count_sign);
}

int	main(void)
{
	int	i;

	char hexa[] = "0123456789ABCDEF";
/* 	char dec[] = "0123456789";
	char bi[] = "01";
	char oct[] = "poniguay"; */
	char str[] = "   \f\t-ADE45678";
	i = ft_atoi_base(str, hexa);
	printf("%d\n", i);
}
