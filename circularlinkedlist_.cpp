
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL, *tail=NULL, *trav=NULL;

void create()

{
    cout << "to create "<< endl ; 
    int n;
    struct node *temp;

    cout << "Enter the Number of Elements you want to Insert : ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        temp = (struct node *)malloc (sizeof(struct node));

        cout << "Enter the Elements : ";
        cin >> temp ->data;

        temp -> next = NULL;

        if(head == NULL)
            {
                head = temp;
                tail = temp;
                tail -> next = temp;
            }
        else{
                tail -> next = temp;
                tail = temp;
                tail -> next = head;
        }
    }
}

void view()
{
    trav = head;
  /*  while (1)
    {
        cout << trav ->data << endl;
        if(trav == tail)
            break;
        else
            trav = trav ->next;
    }*/
    while(1)
    {
        cout<<trav->data<<endl ;
        trav = trav ->next ;
        if (trav==head)
        { break ;}
    }
}

void insert ()
{
 cout << " enter 1 for insert before a node  and 2 to inser after a node";
 int k ;
 cin >> k ;
  trav =head ;
 struct node * temp = (struct node *) malloc (sizeof ( struct node)) ; 
 cout << "enter the value of node ";
 cin >> temp -> data  ;

if ( k ==1 )
{
    cout << " enter the value before u want to insert ";
    int v;
    cin >> v;

    while ( trav->next ->data!=v)
{   trav=trav->next ;  }
    if (trav->next ==head )
    {  temp->next = trav->next ; 
    trav->next  = temp ;
    temp  = head  ; 
    }
   
   else {
        temp -> next = trav ->next ;
        trav -> next = temp ;  

   }
}
if  ( k == 2 )
 {
    cout << "enter the value after u want to insert " ; 
    int p ; 
    cin>>p ;
    while (trav->data!=p )
    {
        trav=trav->next ;
    }
     if (trav == tail )
     {temp->next= trav->next  ; 
     trav->next= temp ; 
     tail = temp ; }
      else    {
                  temp->  next = trav ->next ;
                  trav ->next= temp ; 
             }
           

 }
}


/*
 void del ()
 {
    cout <<"enter the value u want to delete  "<< endl ; 
    int p ; 
    cin >> p ; 
    struct node *temp ; 
    trav=head;
    while ( trav->data!=p)
    {   trav = trav ->next ;}
    if ( trav == head )
    {temp = trav ;
    tail ->next = trav ->next ;
    free (temp) ;
    }
    else
    {
            if ( trav == tail )
            {
                temp = trav ;
                trav = head  ;
                while (trav ->  next -> data = p )
                { trav =trav->next ;}
                 trav ->next = tail ->next ;
                 tail = trav ; 
                 free (temp ) ;
            }
            else { 
                trav = head ;
                while (trav ->next -> data!=p )
                {
                    trav =trav ->next ;
                    temp =trav ->next  ;
                    trav ->next = trav -> next -> next  ;
                    free(temp)              ;
                 }
            }
    }


 }*/
 void del()
{
    int item;
    struct node *temp;

    cout << "Enter the Node you want to Delete :";
    cin >> item;

    if(head -> data == item)
    {
        temp = head;
        head = head -> next;
        free(temp);
        tail -> next = head;
    }
    else
    {
        trav = head;
        
        while(trav -> next -> data != item)
        {
            trav = trav -> next;
            temp = trav -> next;
        }
        if(trav -> next == tail)
        {
            trav -> next = NULL;
            free(temp);
        }
        else
        {
            trav -> next = trav -> next -> next;
            free(temp); 
        }
    }
}





main()
{
     create();
        view();
        insert();
        view();
        del() ;
        view();

        
}
