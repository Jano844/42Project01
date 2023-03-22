
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *p;

    p = (void*)malloc(count * size);
    if (p == 0)
        return('\0');
    ft_memset(p, 0, count * size);
	return (p);
}