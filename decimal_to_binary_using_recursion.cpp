#include<iostream>
using namespace std;
int decimal (int number )
{
    if (number==0)
    {return 0;

    }
    else 
    {
        return number % 2 +10 * decimal(number /2);
    }
}



int main ()

{
    int number;

    cout<<"enter  number "<<endl ;
    
    cin >> number ;
    cout<<decimal(number) ;

}