#include <iostream>
using namespace std; 
class link 
{
    int data; 
    link* next, *head, *tail; 
    public : 
    link ()
    {
        head = tail = next = NULL;
    }
    link (int d )
    {
        data = d;
        next = NULL;
    }
    void create ()
    {
        int i ; 
        cout <<"Enter the no of links u want to create"<<endl; 
        cin >>i; 
        while ( i> 0)
        {
            link * temp = new link; 
            cout <<"Enter the data"<<endl; 
            cin >> temp -> data; 
            temp ->next = NULL; 
            if (head == NULL)
            {
                head = tail = temp ;
            }
            else 
            {
                tail -> next = temp ->next ; 
                tail = temp ; 
            }
            i--; 
        }
    }
    void display ()
    {
        link * temp = head ; 
        while ( temp->next != NULL)
        {
            cout << temp->data<<endl; 
            temp = temp ->next; 
        }
    }
};
int main()
{
    link l; 
    l.create();
    l.display();
}
