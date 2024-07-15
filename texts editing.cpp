#include<iostream>
using namespace std;
int main()
{
    string color,name,tap,dop;
    cout<<"enter a color:";
    getline(cin,color);
    cout<<"enter a name:";
    getline(cin,name);
    cout<<"enter fathers name:";
    getline(cin,dop);
    cout<<"enter mothers name:";
    getline(cin,tap);
    cout<<"my favorite color is: "<<color<<" and my name is: "<<name<<endl;
    cout<<"my best color is: "<<color<<" and my name is: "<<dop<<endl;
    cout<<"my favorite color is: "<<dop<<" and my name is: "<<name<<endl;
    cout<<"my favorite color is: "<<color<<" and my name is: "<<tap<<endl;
    return 0;
}
