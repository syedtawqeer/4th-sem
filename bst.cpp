#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *right, *left;
};
struct node *root = NULL, *trav = NULL;
void create()
{
    int n;
    cout << "Enter the Number of Nodes : ";
    cin >> n;
    struct node *Temp ;

    for(int i = 0; i <= n; i++)
    {
        Temp = (struct node *)malloc(sizeof(struct node)) ;
        

        cout << "Enter the Elements : ";
        cin >> Temp -> data;

        Temp -> left = Temp -> right = NULL;

        if(root == NULL)
            root = Temp;
        else{
            trav = root;
            while (1)
            {
                if(Temp -> data < trav -> data)
                {
                    if(trav -> left == NULL) {
                        trav -> left = Temp;
                        break;
                    }
                    else
                        trav = trav -> left;
                } 
                else if(Temp -> data > trav -> data)
                {
                    if(trav -> right == NULL) {
                        trav -> right = Temp;
                        break;
                    }
                    else
                        trav = trav ->right;
                }
                else
                    cout << "Duplicate Items are Not Allowded" << endl;
            }
            
        }
    }
}

void preorder()
{trav=root ;
  while (1)
  {
    trav=trav->left ;
    trav = trav->right ; 
  cout << trav ->data << endl ; 

  }
}

void inorder()
{trav=root ;
  while (1)
  {
    trav=trav->left ;
    cout << trav ->data << endl ; 
    trav = trav->right ; 
  cout << trav ->data << endl ; 

  }
}

void postorder()
{trav=root ;
  while (1)
  {
    cout << trav ->data << endl ; 
    trav=trav->left ;
    trav = trav->right ; 
  
  }
}

int main ()
 
 {
    create();
    preorder() ;
    inorder();
    postorder();
    


 }

