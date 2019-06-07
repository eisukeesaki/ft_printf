#include "libft/libft.h"

void	ft_print_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;

	if (!s || len < 1)
		return ;

	i = 0;
	while (i < len)
	{
		write(1, &s[start + i], 1);
		i++;;
	}
}

// int		main(void)
// {
// 	char			s[] = "abcdefg";
// 	unsigned int	start = 2;
// 	size_t			len = 0;

// 	ft_print_substr(s, start, len);

// 	return (0);
// }