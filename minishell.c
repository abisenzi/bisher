int	main(void)
{
  char *s = "Hola Mundo!";
  printf (%s, s);
  return (0);
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
