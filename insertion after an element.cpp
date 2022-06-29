#include<iostream>
using namespace std;
int main()
{
    int pos;
    cout<<"enter the number of elements that you want to enter"<<endl;
    int x;
    cin>>x;
    int z=x+1;
    int a[z];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the item that you want to insert"<<endl;
    int item;
    cin>>item;
    cout<<"enter the element after that you want to insert"<<endl;
    int element;
    cin>>element;
    for(int i=0;i<x;i++)
    {
        if(a[i]==element)
        {
          pos = i;  
        }
    }
    for(int i=x;i>pos;i--)
    {
        a[i] = a[i-1];
    }
    a[pos+1] = item;
    for(int i=0;i<z;i++)
    {
        cout<<a[i];
    }
}