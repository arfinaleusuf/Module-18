#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_sceDiagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_sceDiagonal = false;
                        printf("this is not a secondary diagonal matrix");
                    }
                }
            }
        }
        if(is_sceDiagonal == true)
        {
            printf("this is a secondary diagonal matrix");
        }
    }
    else
    {
        printf("this is not a secondary diagonal matrix");
    }
    return 0;
}