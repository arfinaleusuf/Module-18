#include <stdio.h>
#include<stdbool.h>
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

    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
              if( i == j)
              {
                
              }
              else
              {
                if(a[i][j]==0)
                {
                    
                }
                else
                {
                    is_diagonal = false;
                    printf("this is not a diagonal matrix");
                }
              }
            }
        }
        if(is_diagonal == true)
        {
            printf("this is a diogonal matrix");
        }
    }
    else
    {
        printf("this is not a diagonal matrix");
    }
}