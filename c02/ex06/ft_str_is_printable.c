int	ft_printable(char c)
{
	if (c >= 32 && c != 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
