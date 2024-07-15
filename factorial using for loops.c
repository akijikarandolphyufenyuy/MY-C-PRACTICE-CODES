#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("enter any number to get its factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;

    }
    printf("the factorial is:%d",factorial);
    return 0;
}
