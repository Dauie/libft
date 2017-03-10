char		*ft_itoabse(int nbg, int bse)
{
	char	c;
	long	nb;
	int		sz;
	char	*res;
	char	*hex;

	nb = nbg;
	hex = ft_strdup("0123456789abcdef");
	sz = ft_numlen((long long)nbg, 10);
	if (!(res = ((char *)ft_memalloc(sz-- + 1))))
		return (NULL);
	if (nbg == 0)
		return (ft_strdup("0"));
	if (nbg < 0)
		nb = nb * -1;
	while (nb)
	{
		res[sz--] = hex[nb % bse];
		nb = nb / bse;
	}
	if (nbg < 0)
		res[0] = '-';
	return (res);
}
