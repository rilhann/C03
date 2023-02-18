/*#include <stdio.h>
#include <unistd.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (to_find[index] == '\0')
	{
		return (str);
	}
	while (str[count] != '\0')
	{
		index = 0;
		while (to_find[index] == str[count + index])
		{
			index++;
			if (to_find[index] == '\0')
			{
				return (str + count);
			}
		}
		count++;
	}
	return (0);
}

/*int	main(void)
{
	char a[] = "asdjnasdbalapjshdjasbalpndasd";
	char b[] = "";

	printf("%s",ft_strstr(a,b));
}*/
