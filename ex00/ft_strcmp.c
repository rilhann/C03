
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] != '\0' && s2[count] != '\0'))
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*#include <string.h>
int	main(void)
{
	char s1[] = "BalP";
	char s2[] = "BalP";

	printf("%i\n",ft_strcmp(s1,s2));
	printf("%i",strcmp(s1,s2));
}*/
