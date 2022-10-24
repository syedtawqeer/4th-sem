

//binary_to decimal_recursion
#include<iostream>
using namespace std;
int decimal(int binary)
{
    if (binary==0)
    {return 0;

    }
    else 
    {
        return binary% 10 +2 * (decimal(binary /10) ) ;
    }
}



int main ()

{
    int binary;

    cout<<"enter  number "<<endl ;
    
    cin >> binary ;
    cout<<decimal(binary) ;

}