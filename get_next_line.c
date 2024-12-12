#include <stdio>

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
