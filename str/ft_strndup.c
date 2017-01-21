#include "../libft.h"

char		*ft_strndup(const char *src, size_t len)
{
	size_t		i;
	char	*res;

	i = 0;
	res = ft_strnew(ft_strlen(src));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
