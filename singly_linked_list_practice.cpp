#include<iostream>
using  namespace std ;


struct list {
    int data ;

    struct list * next ;

};
struct list * head = nullptr, *tail= nullptr, *trav= nullptr, *frist = nullptr ;


void create ()
{
    int n               ;
    cout << "enter no of nodes u want to create /n "<< endl ;
    cin >>  n ;
    struct list *temp ;
     for (int i = 0;i<n ; i ++)
     {
           struct list *temp ;
temp = (struct list *)malloc(sizeof ( struct list )) ;
cout << "enter value for"  <<i <<"data "<< endl ;

    cin >> temp->data ;
    temp->next= nullptr ;




if ( head == nullptr )
{


head=temp ;
tail=temp ;

}
else {
    
   

            tail -> next = temp ->next ;
               tail = temp ;

}
}
}

void display()
{
trav = head;
while ( trav != nullptr)
{
    cout << trav->data << endl ;
    trav=trav->next ;

}

}
void del()
{
    struct list *temp ;
temp = (struct list *)malloc(sizeof ( struct list )) ;
    int k ;
cout <<" enter the value u wnt to delete" << endl ;
cin >>  k ;
trav=head ;

while (trav->next->data!=k )
{trav =trav->next ;
}
temp=trav->next;

trav ->next=trav->next ->next ;
free(temp);
 display();


}
 void insert ()
 {
     int  k  ;
cout     << "enter the value after which u want to insert " << endl ;
cin >> k ;
struct list *temp ;
temp = (struct list *)malloc(sizeof ( struct list )) ;
    cout << "enter the value u want to insert "<<endl;
    cin >> temp->data ;

    trav=head ;

while (trav->data!=k )
{trav =trav->next ;

}if (trav->data!=k )
{
    cout << " element not in the list /n "<< endl  ;
}
else 
{
temp -> next = trav ->next ; 
trav-> next =temp ;

display() ;
}


 }



 main ()
 {/*int s ;
    cout << " 1 for create 2 for view  3 for exit ";
    cin >> s;
switch (s)
{
case 1 :
{create();
break ;
}
case 2 :{
    display();
    break ;
}
}*/
create();
display();
insert();
del();



 }


