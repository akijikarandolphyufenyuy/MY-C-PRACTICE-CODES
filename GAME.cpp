#include<iostream>
using namespace std;
int main()
{
    int maxi=4;
    int counter=0,guess=4,myguess;
    cout<<"enter your guess number:"<<endl;
    cin>>myguess;
     while(myguess!=guess){

        counter=counter+1;
        cout<<"enter your guess number:"<<endl;
        cin>>myguess;
        if(counter==maxi)
        {
            break;
        }

    }
     if(myguess==guess)
    {
        cout<<"you worn";
    }
    else {
        cout<<"you lost"<<endl;
    }

    return 0;
}
