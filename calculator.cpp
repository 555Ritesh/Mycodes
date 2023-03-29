#include<iostream>
using namespace std;

int main()
{
    int ch,a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    

    while(1)
    {
        cout<<"*****MENU*****"<<endl;
        cout<<" 1.Add\n 2.Substract\n 3.Multiply\n 4.Divide\n 5.Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:c=a+b;
            cout<<"Addition is : "<<c<<endl;
            break;
            case 2:c=a-b;
            cout<<"Substraction is : "<<c<<endl;
            break;
            case 3:c=a*b;
            cout<<"Multiplication is : "<<c<<endl;
            break;
            case 4:c=a/b;
            cout<<"Division is : "<<c<<endl;
            break;
            case 5: exit(0);
            cout<<"Thank you"<<endl;
            
            break;
            default:
                cout<<"Enter valid choice"<<endl;
        }
        ch++;
    }
    return 0;
    
}
