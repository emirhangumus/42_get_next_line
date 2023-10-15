#include "get_next_line.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}