#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int number,facto;
    cout<<"enter a number greater than or equal to zero:";
    cin>>number;
    facto=factorial(number);
    cout<<"the factorial of "<<number<<" is
    "<<facto<<endl;
    return 0;
}
factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}
