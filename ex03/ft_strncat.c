/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while ((src[index] != '\0') && (index < nb))
	{
		dest[count] = src[index];
		index++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = " alasahan";
	char dest[] = "mert";
	unsigned int nb;

	nb = 4;
	ft_strncat(dest,src,nb);
	printf("%s",dest);
}*/
