#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	int	i;

	char hexa[] = "0123456789ABCDEF";
	char dec[] = "0123456789";
	char bi[] = "01";
	char oct[] = "poniguay";
	char str[] = "    \n +++-7667665";
	char	*result;
	result = ft_convert_base(str, dec, dec);
	printf("%s\n", result);
}
