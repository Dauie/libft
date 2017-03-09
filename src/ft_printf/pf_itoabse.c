char		*ft_itoabase(t_uiput *db, intmax_t nbr, int bse)
{
	char	buff[32];
	int		i;

	i = 30;
	if (nbr == 0)
		return (ft_strxnew('0', 1));
	else if (nbr < 0 && (all->sign = -1))
		nbr = nbr * -1;
	while (nbr > 0 && i > 0)
	{
		if (c == 'o' || c == 'x')
			buff[i] = "0123456789abcdef"[nbr % base];
		else if (c == 'O' || c == 'X')
			buff[i] = "0123456789ABCDEF"[nbr % base];
		nbr = nbr / base;
		--i;
	}
	buff[i] = '\0';
	return (ft_strdup(buff + i + 1));
