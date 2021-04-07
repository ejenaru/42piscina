#include "libreriah.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_map(char **tab, int fil, int col)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < fil)
    {
        while (j < col)
        {
            ft_putchar(tab[i][j]);
            j++;
        }
     i++;  
    }
}
