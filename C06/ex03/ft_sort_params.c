#include <stdio.h>
#include <unistd.h>
#include <string.h>

int compare(char *arr1, char *arr2)
{
    int counter = 0;
    while ( arr1[counter] != '\0' && arr2[counter] != '\0')
    {
        if (arr1[counter] != arr2[counter])
            return ( (arr1[counter] - arr2[counter]));
        counter++;
    }
    return ((arr1[counter] - arr2[counter]));
}

void    swap(char *arr1, char *arr2)
{
    printf("/%s/ /%s/",arr1,arr2);
    int counter = 0;
    char temp_ch;
    while (arr1[counter] != '\0' || arr2[counter] != '\0')
    {
        temp_ch = arr1[counter];
        arr1[counter] = arr2[counter];
        arr2[counter] = temp_ch;
        counter++;
    }
    arr1[counter] = '\0';
    arr2[counter] = '\0';
}

int main()
{
    int count_str;
    int count_char;
    int count;
    
    int argv = 5;
    char argc[5][10] = {"ex"," ","C","B", "A"};
    count_str = 1;
    count = 1;
    while (count < argv - 1)
    {
        count_str = 1;
        while (count_str < argv)
        {
            if(count_str + 1 < argv && compare(argc[count_str], argc[count_str + 1]) > 0)
            {
                printf("Swap");
                swap(argc[count_str], argc[count_str + 1]);
                printf("/%s/ /%s/\n",argc[count_str],argc[count_str + 1]);
            }
            count_str++;
        }
        count++;
    }
    
    count_str = 1;
    while (count_str < argv)
    {
        count_char = 0;
        //print array
        while (argc[count_str][count_char] != '\0')
        {
            write(1, &argc[count_str][count_char], 1);
            count_char++;
        }
        write(1, "\n", 1);
        count_str++;
    }
    char arr1[3] = "AA";
    char arr2[3] = "AB";
    printf("%d",compare(arr1,arr2));
    return (0);
}