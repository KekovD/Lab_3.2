#include <stdio.h>
#include <stdlib.h>
int main()
{
    char arry[5] = {};
    char *ar = arry;
    arry[0] = 'H';
    arry[1] = 'e';
    arry[2] = 'l';
    arry[3] = 'l';
    arry[4] = 'o';
    for (int i = 0; i < 5; i ++)
    {
        if(i == 4)
        {
            printf("%c\n", *(ar + i));
        }
        else
        {
            printf("%c", *(ar + i));
        }
    }
    char *arr = 0;
    arr = malloc(sizeof(char) * 5);
    *arr = 'H';
    *(arr + 1) = 'e';
    *(arr + 2) = 'l';
    *(arr + 3) = 'l';
    *(arr + 4) = 'o';
    
    for (int i = 0; i < 6; i ++)
    {
        if (i == 4)
        {
            printf("%c\n", arr[i]);
        }
        else
        {
            printf("%c", arr[i]);
        }
    }
    free(arr);
    return 0;
}
