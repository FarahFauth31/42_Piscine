#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int  main(void)
{
    int *********nnum;
    int ********nnum1;
    int *******nnum2;
    int ******nnum3;
    int *****nnum4;
    int ****nnum5;
    int ***nnum6;
    int **nnum7;
    int *nnum8;
    int c;

    c = 22;
    nnum8 = &c;
    nnum7 = &nnum8;
    nnum6 = &nnum7;
    nnum5 = &nnum6;
    nnum4 = &nnum5;
    nnum3 = &nnum4;
    nnum2 = &nnum3;
    nnum1 = &nnum2;
    nnum = &nnum1;

    ft_ultimate_ft(nnum);
    printf("%d", c);
    //nnum = nnum + 48;
    //write(1, &nnum, 2);
}