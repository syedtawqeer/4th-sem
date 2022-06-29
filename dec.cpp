#include<iostream>
using namespace std;
void binary(int x)
{
     if(x==0)
    {
        cout<<0;
    }
    else if(x==1)
    {
      cout<<1;
    }
    else
    {
        binary(x/2);
        cout<<x%2;
    }
}
void octal(int x)
{
    if(x==0)
    {
        cout<<0;
    }
    else if(x==1)
    {
      cout<<1;
    }
    else
    {
        octal(x/8);
        cout<<x%8;
    }
}

void hexa(int x)
{
     if(x==0)
    {
        cout<<0;
    }
    else if(x==1)
    {
      cout<<1;
    }
    else
    {
        hexa(x/16);
        int y=x%16;
        if(y==10)
        {
            cout<<"A";
        }
        else if(y==11)
        {
            cout<<"B";
        }
        else if(y==12)
        {
            cout<<"C";
        }
        else if(y==13)
        {
            cout<<"D";
        }
        else if(y==14)
        {
            cout<<"E";
        }
        else if(y==15)
        {
            cout<<"F";
        }
        else{
            cout<<y;
        }

    }
}

int main()
{
    int x;
    cout<<"enter the decimal number"<<endl;
    cin>>x;
   // binary(x);
   //  octal(x);
   
    hexa(x);
}