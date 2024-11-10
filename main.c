#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int	main()
{
	// int fd = open("test.txt", O_RDWR | O_CREAT, 0777);
	// ft_putendl_fd("Hello Funny World", fd);
	// char s[] = "Hello Funny '\200'World";
	// char res[] = "Hello ";
	// strlcpy(res, NULL, 7);
	// printf("%s\n", ft_strjoin(NULL, NULL));

//        -----split is the best----------

	// char **res = ft_split("Hello Funny World !", ' ');
	// int i = 0;
	// while (res[i])
	// 	printf("%s\n", res[i++]);



	printf("%s\n", ft_itoa(-2147483648));
}