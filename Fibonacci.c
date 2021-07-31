#include <stdio.h>
int main()
{
    int array[20][20] = { 0 };
    int i, j;
    for (i = 0;i < 20;++i)
        for (j = 0; j <= i; ++j)
        {
            if (0 == i || 1 == i)
            {
                array[i][j] = 1;
            }
            if (0 != j && i != j)
            {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
            else
            {
                array[i][j] = 1;
            }
        }
    for (i = 0; i < 20; ++i)
    {
        for (j = 0; j <= i; ++j)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}