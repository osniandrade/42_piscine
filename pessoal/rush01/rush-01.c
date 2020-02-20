#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 8);
}

	int top[3];
	int down[3];
	int left[3];
	int right[3];

int		main(int argc, char **argv)
{
	int i;
	int c_u;

	i = 0;
	c_u = 0;

	if (argc != 2)
	write(1, "\n ", 1);

	while (argv[1][i] != '\0')
	{
      	if (i % 2 == 0)
		{
			 if (i < 7)
      		{
        		top[c_u] = (int) argv[1][i];
				write(1, &top[c_u], 4);
				c_u++;
			}
			else if (i > 7 && i < 16)
      		{
				if (c_u > 4) c_u = 0;
        		down[c_u] = (int) argv[1][i];
				write(1, &down[c_u], 4);
				c_u++;
			}

			else if (i > 16 && i < 24)
      		{
				if (c_u > 4) c_u = 0;
        		left[c_u] = (int) argv[1][i];
				write(1, &left[c_u], 4);
				c_u++;
			}
			else if (i > 24)
      		{
        		if (c_u > 4) c_u = 0;
				right[c_u] = (int) argv[1][i];
				write(1, &right[c_u], 4);
				c_u++;
			}

		}
		i++;
	}
}