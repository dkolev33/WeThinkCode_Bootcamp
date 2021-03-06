#include <unistd.h>

int		is_first(char *str, char c, int len)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int		is_instring(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *str, char *str2)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_instring(str2, str[i]) && is_first(str, str[i], i))
			write(1, &(str[i]), 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
