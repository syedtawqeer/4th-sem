#include<iostream>
using namespace std;
int factorial(int f)
{
    if(f==0)
    {
        return 1;
    }
    
    else
    {    return f*factorial(f-1);
    }
    
}
int main()
{
    int f;
    cout<<"enter the value of f"<<endl;
    cin>>f;
    int x=factorial(f);
    cout<<x<<endl;
}