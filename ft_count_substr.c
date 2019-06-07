#include "libft/libft.h"

size_t	ft_count_substr(const char *s, unsigned int start, char end)
{
	size_t	len;

	if (!s || !end)
		return (0);

	len = 0;
	while (s[start + len] != end && s[start + len])
		len++;;
	return (len);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char			s[] = "%abcdef";
// 	unsigned int	start = 0;
// 	char			end = '%';

// 	printf("substr len:%lu\n", ft_count_substr(s, start, end));

// 	return (0);
// }