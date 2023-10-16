#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
    *mod = a % b;
}

int  main(void)
{
    int na;
    int nb;
    int *div;
    int *mod;

    na = 13;
    nb = 6;
    div = &na;
    mod = &nb;

    printf("%d", *div);
    printf("%d", *mod);

    ft_div_mod(na, nb, div, mod);
    printf("%d", na);
    printf("%d", nb);
    //nnum = nnum + 48;
    //write(1, &nnum, 2);

}