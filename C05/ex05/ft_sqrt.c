
int ft_sqrt(int nb)
{
    if ( nb < 0)
        return (0);
    else if (nb <= 1)
        return (nb);
    return ((ft_sqrt(nb/2) + ft_sqrt(nb/2))*2);
}