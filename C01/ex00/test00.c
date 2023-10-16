#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int  main(void)
{
    int *nnum;
    int c;

    c = 22;
    nnum = &c;
    ft_ft(nnum);
    printf("%d", c);
    //nnum = nnum + 48;
    //write(1, &c, 2);
}