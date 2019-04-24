

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0, j = 0;
	while (s1[i])
	{
		while (s1[i] != s2[j])
		{
			if (!s1[i])
				return (0);
			i++;
		}
		point = i;
		while (s1[i] == s2[j])
		{
			if (!s2[j])
				return ((char *)&s1[point]);
			i++, j++;
		}
		if (!s2[j])
			return ((char *)&s1[point]);
		j = 0;
	}
	return (0);
}
