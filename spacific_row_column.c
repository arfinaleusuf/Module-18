#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int nCol = 0;
    scanf("%d", &nCol);
    for(int i = 0; i<r; i++)
    {
        printf("%d ", a[i][nCol]);
    }

    return 0;
}