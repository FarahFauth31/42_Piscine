#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;
    int temp_b;
    int div;
    int mod;

    temp_a = *a;
    temp_b = *b;
    div = temp_a / temp_b;
    mod = temp_a % temp_b;
    *a = div;
    *b = mod;
}

int  main(void)
{
    int na;
    int nb;
    int *a;
    int *b;

    na = 13;
    nb = 6;
    a = &na;
    b = &nb;

    printf("%d", *a);
    printf("%d", *b);

    ft_ultimate_div_mod(a, b);
    printf("%d", na);
    printf("%d", nb);
    //nnum = nnum + 48;
    //write(1, &nnum, 2);
}