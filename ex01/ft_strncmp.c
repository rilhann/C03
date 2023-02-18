/*#include <stdio.h>
#include <string.h>
#include <unistd.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0'
		&& s1[count] == s2[count] && (count < n))
	{
		count++;
	}
	if (count == n)
		return (0);
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*int	main(void)
{
	char s1[] = "BalP\200";
	char s2[] = "BalP\0";

	unsigned int a;

	a = 5;

	printf("%i\n",ft_strncmp(s1,s2,a));
	printf("%i",strncmp(s1,s2,a));
}*/
