#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
		printf("length = %i\n", ft_strlen(argv[1]));
	return (0);
}
