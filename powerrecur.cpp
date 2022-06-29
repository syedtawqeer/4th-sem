#include<iostream>
#include<cmath>
using namespace std;
int rec(int x,int y)
{
    if(y==1)
    {
        return x;
    }
    else if(y==0)
    {
        return 1;
    }
    else
    { 
       return x*rec(x,y-1);
    }
}
int main()
{
    cout<<"enter the value of x and enter the power"<<endl;
    int x,y;
    cin>>x>>y;
    int z = rec(x,y);
    cout<<z<<endl;
}