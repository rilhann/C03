/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[index] != '\0')
	{
		dest[count] = src[index];
		index++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*#include <string.h>

int	main(void)
{
	char src[] = " alaşahan";
	char dest[] = "mert";
	
	strcat(dest,src);

	printf("%s\n",dest);
}*/
