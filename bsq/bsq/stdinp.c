#include "libreriah.h"

char *ft_stdinp(void)
{
    int tam_buff;
    int buf[4096];
    while(tam_buff = read(0, &buf, 4096) > 0);
}