#include <unistd.h>


#include <unistd.h>

void	ft_l_if_func2(int i, int j, int k, int l)
{
    if (i != j && j != k && k != i && i < j && j < k)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		if (i == '7' && j == '8' && k == '9')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
	
}

void	ft_print_combn(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
                {
                    e = '0';
                    while (e <= '9')
                    {
                        f = '0';
                        while (f <= '9')
                        {
                            g = '0';
                            while (g <= '9')
                            {
                                h = '0';
                                while (h <= '9')
                                {
                                    i = '0';
                                    while (i <= '9')
                                    {
                                        j = '0';
                                        while (j <= '9')
                                        {
                                            if (a != b && b != c && i != j && i < j)
                                            {
                                                write(1, &i, 1);
                                                write(1, &j, 1);
                                                if (i == '7' && j == '8')
                                                {
                                                }
                                                else
                                                {
                                                    write(1, ", ", 2);
                                                }
                                            }
                                            ++j;
                                        }
                                        ++i;
                                    }
                                    ++h;
                                }
                                ++g;
                            }
                            ++f;
                        }
                        ++e;
                    }
                    
                    ++d;
                }
				++c;
			}
			++b;
		}
		++a;
	}
}

int	main(void)
{
	ft_print_combn();
}