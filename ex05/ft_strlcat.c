#include <unistd.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;
	unsigned int	lent1;
	unsigned int	lent2;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	lent1 = c;
	lent2 = ft_strlen(src);
	d = 0;
	while (src[d] != '\0' && c < size - 1)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (lent1 + lent2);
}
/*int main ()
{
	char a[25] = "bilgsstf";
	char b[25] = "test";
	char c[25] = "bilgsstf";
	char d[25] = "test";
	int p;
 	int  p2;
	p = strlcat(a,b,15);
	printf("orj: %d\n", p);
	p2 = ft_strlcat(c,d, 15);
	printf("%d", p2);
}*/
