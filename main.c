#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd = open("a.txt", O_RDONLY);
	char *line;
	int current;
	int i;

	// i = 0;
	// while (i < 5)
	// {
	// 	current = tester(fd);
	// 	printf("%d\n", current);
	// 	i++;
	// }
	// return (0);

	i = 0;
	while (i < 9)
	{
		line = get_next_line(fd);
		if (!(*line))
			return (1);
		printf("%d : %s", i, line);
		i++;
	}

	close(fd);
	return (0);
}