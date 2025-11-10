#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int first_num = a[0][0];
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]== first_num)
            {
                count++;
            }
        }
    }
    if(count == n)
    {
        printf("scalar matrix");
    }
    else
    {
        printf("Not a scalar matrix");
    }
    return 0;
}