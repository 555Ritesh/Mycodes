#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the First numbers : ";
    cin>>a;
    cout<<"Enter the Second numbers : ";
    cin>>b;
    cout<<"Enter the Third numbers : ";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"First no is greater : "<<a<<endl;
        }
        else{
            cout<<"Second no is greater : "<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Second no is greater : "<<b<<endl;
        }
        else{
            cout<<"Third no is greater : "<<c<<endl;
        }
    }

    return 0;
}