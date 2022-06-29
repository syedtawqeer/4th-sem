#include<iostream>
using namespace std;
int prime(int x,int n)
{
    if(n==x)
    {
        return 0;
    }
    else if(n%x==0)
    {
       return 1;  
    }
    else{
        return prime(x+1,n);
    }
}

int main()
{
    cout<<"enter the number "<<endl;
    int x;
    cin>>x;
    if(prime(2,x)==0)
    {
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }

}