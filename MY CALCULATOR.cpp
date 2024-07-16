#include<iostream>
using namespace std;
int main()
{
    int choice,num1,num2,sum,mult,sub,div;
    cout<<"welcome to my calculator"<<endl;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    cout<<"choose what you want to carry out from the list bellow"<<endl;
    cout<<"enter 1 for addition:1"<<endl;
    cout<<"enter 2 for subtraction:1"<<endl;
    cout<<"enter 3 for product :3"<<endl;
    cout<<"enter 4 for division:4"<<endl;
    cin>>choice;
    if(choice==1)
    {
        sum=num1+num2;
        cout<<"sum:"<< sum <<endl;
        #this line is provide the sum of the two numbers
    }
    else if(choice==2)
    {
        sub=num1-num2;
        cout<<"the difference is:"<< sub<<endl;
    }
    else if(choice==3)
    {
        mult=num1*num2;
        cout<<"product is:"<<mult<<endl;
    }
    else if(choice==4)
    {
        div=num1/num2;
        cout<<"quotient of the two numbers is:"<<div<<endl;
    }
    else
        cout<<"please select from the list to be able to carry out any operation"<<endl;
    return 0;
}
