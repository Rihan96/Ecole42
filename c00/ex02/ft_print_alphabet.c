#include<unistd.h>

void ft_print_reverse(void)
{
    char c = 122;
    while(c >= 97)
    {
        write(1, &c, 1);
        c--;
    }
}

int main(void)
{
    ft_print_reverse();
    return(0);
}

