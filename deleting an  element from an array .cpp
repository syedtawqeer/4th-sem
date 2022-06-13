#include <iostream>
using namespace std;

int main()
{
    int i,j , s,e               ;
     cout << "enter the size of the array "<< endl  ;
     cin >> s ;
    int a[s] ;
 for (i=0 ; i < s ; i ++ )
 { 
    cin >> a[i] ;

 }  
 cout << " enter the element u want to delete "<< endl ; 
 cin >> e ; 
 cout<< "enter the elements"<< endl ;

for (i = 0 ; i < s ; i ++  )
{
    if (a[i]== e )
    { 
        for ( j = i ; j <  s ; j++ )
        {
            a[j] = a[j+1] ;
        }
    
    }
    
}
 for (i=0 ; i < s-1; i ++ )
 {
    cout << a[i]  ;
 }





}