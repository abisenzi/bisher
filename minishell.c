#include <stdio.h>

int	main(void)
{
  char *s = "Hola Mundo!";
  printf (%s, s);
  return (0);

}

#include <stdio.h>

int	ft_putstr(char *s)
{
	size_t	i;
	i = 0;

	if (!s)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	While (s[i])
	{
		if (write(1, &s[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!str)
	{
		i++;
		str--;
	}
	return (i);
}
