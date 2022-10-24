#include<iostream>
using namespace std ;
struct node{
    int data ; 
    struct node * next ,*prev ;
};
struct node  *trav =nullptr  , *head  =nullptr  , * tail  =nullptr  ;

void create ()
{cout<< " creating a node "  ;
    cout << "enter the no of nodes u want to create ";
    int k ; 
    cin >> k ; 
    struct node *temp ; 
     for ( int i =  0 ;  i <k ; i ++ )
     {
        temp = (struct node*)malloc ( sizeof (struct node ));
        cout<< "enter  data for the node " ;
        cin >> temp ->data ;
        temp -> next = NULL ; 
        temp->prev= NULL ;
        if (head == NULL )
        { 
            head = temp ;
            tail = temp ;
             temp ->next= NULL;
             temp ->prev= head ;
        }
         else 
         {  
            tail ->next= temp ;
            temp ->next = NULL ;
            temp -> prev = tail ;
            tail=temp ; 
         }
    }

}
void view ()
{
     cout << " viewing " <<endl ;
  trav = head ;
   while ( trav != NULL )
   {
    cout << trav ->data<< endl ;
    trav = trav ->next ; 
   }
}


void insert()
{
    int value  ;
    cout << "inserting"<< endl ;
    struct node * temp = (struct node *)malloc (sizeof (struct node ))  ;
    cout << " enter the value of the node " ;
    cin >> temp -> data ;
    

    cout << "enter the value before u want to insert a node "<< endl ; 
    cin>> value  ;
    trav=head ;while ( trav->data!=value ) {trav=trav->next ;}
    if (trav == head)
    {  trav -> prev = temp ;
     temp -> next = head;
      temp -> prev= NULL ;
       head = temp ;
    } 


    else if (trav==tail)
    {
        
        temp ->prev=trav->prev   ;
        temp ->next = trav ; 
        trav->prev ->next  =  temp ;
        trav -> prev = temp ; 

}

    else  { trav ->prev->next = temp ;
     temp -> next = trav ;
      temp -> prev = trav->prev  ;
       trav -> prev= temp ;
        }

    
        view () ;


}





int main ()
{
    create() ;
    view ()  ;
    insert();

}