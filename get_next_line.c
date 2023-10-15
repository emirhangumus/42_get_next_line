#include "get_next_line.h"

char *get_next_line(int fd)
{
	static size_t *buff_c;
	char *mem;
	int current;
	int i;

	buff_c = 0;
	mem = (char *)ft_calloc(sizeof(char), BUFFER_SIZE);
	i = 0;
	while (mem[i - 1] != '\n')
	{
		current = read(fd, mem + i, 1);
		if (current < 0)
			return (NULL);
		if (current == 0)
		{
			mem[i - 1] = '\0';
			return (mem);
		}
		buff_c++;
		i++;
	}
	return (mem);
}