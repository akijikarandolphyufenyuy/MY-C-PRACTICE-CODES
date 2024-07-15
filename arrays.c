#include<stdio.h>
int main()
{
    int n,a[6],i;
    printf("enter the number of iterations:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("enter the elements:");
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d=a[%d]\n",i,a[i]);
    }
    return 0;
}
