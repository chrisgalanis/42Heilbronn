
#include<unistd.h>

int main(int argv, char **argc)
{
    int count_str;
    int count_char;

    count_str = 1;
    while (count_str < argv)
    {
        count_char = 0;
        while (argc[count_str][count_char] != '\0')
        {
            write(1, &argc[count_str][count_char], 1);
            count_char++;
        }
        count_str++;
        write(1, '\n', 1);
    }
    return (0);
}