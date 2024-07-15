#include<stdio.h>
int factorial(int n);
int main()
{
    int number,facto;
    printf("enter any number to get its factorial:");
    scanf("%d",&number);
    facto=factorial(number);
    printf("the factorial of the number you entered is given by:%d\n",facto);
    return 0;
}
factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return  n*factorial(n-1);
    }

}
