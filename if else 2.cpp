#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter a value for number 1:";
    cin>>num1;
    cout<<"enter a value for number 2:";
    cin>>num2;
    if(num1>num2)
        cout<<"the number "<<num1<<" is greater than"<< num2<<endl;
    else
        cout<<"the number "<<num2<<" is greater than "<< num1<<endl;
    return 0;
}
