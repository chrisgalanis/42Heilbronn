
int ft_recursive_power(int nb, int power)
{
    int i;

    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;
    return (ft_iterative_power(nb, power - 1) * 10); 
}

#include<stdio.h>
int main()
{
    printf("%d", ft_iterative_power(10,3));
}