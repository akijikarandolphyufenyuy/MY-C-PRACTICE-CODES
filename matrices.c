#include<stdio.h>
int main()
{
    int array[3][3]={{1,3,4},{5,6,2},{2,5,3}};
    int ter[3][3]={{4,6,2},{7,2,1},{6,2,2}};
    int sum[3][3];
    int i,j,h;
    printf("the first matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            array[i][j];
            printf("array[%d][%d]=%d\n",i,j,array[i][j]);

        }
    }
    printf("the second matrix is given as\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ter[i][j];
            printf("ter[%d][%d]=%d\n",i,j,ter[i][j]);
        }
    }
    printf("the sum of the matrices is displayed bellow\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=array[i][j]+ter[i][j];
            printf("sum[%d][%d]=%d\n",i,j,sum[i][j]);
        }
    }
    return 0;
}
