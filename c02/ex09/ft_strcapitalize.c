int	ft_downcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int	ft_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalphanumeric(char c)
{
	if (ft_numeric(c) || ft_downcase(c) || ft_upcase(c))
		return (1);
	return (0);
}

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i == 0 || !ft_isalphanumeric(str[i - 1])) && ft_downcase(str[i]))
			str[i] = ft_charupcase(str[i]);
		i++;
	}
	return (str);
}
