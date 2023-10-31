#include <stdio.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    write(1,str,i);
}


int main()
{
    char string1[] = "Monke";

    ft_putstr(&string1);
}