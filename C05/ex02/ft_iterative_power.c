
int ft_iterative_power(int nb, int power)
{
    int i;

    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;

    i=0;
    while (i < power)
    {
        nb *= nb;
        i++;
    }
    
}