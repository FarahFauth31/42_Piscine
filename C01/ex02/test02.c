#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp_a;
    int temp_b;

    temp_a = *a;
    temp_b = *b;

    *a = temp_b;
    *b = temp_a;
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

    ft_swap(a, b);
    printf("%d", na);
    printf("%d", nb);
    //nnum = nnum + 48;
    //write(1, &nnum, 2);
}