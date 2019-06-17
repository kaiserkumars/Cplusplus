//https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
// C program to find n'th Node in linked list
#include<iostream>
using namespace std;
#ifdef USEDEBUG
#define Debug(x) std::cout << x
#else
#define Debug(x) 
#endif 
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node* SortedMerge(struct Node* a, struct Node* b);
void MoveNode(struct Node** destRef, struct Node** sourceRef);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = SortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    Node *temp1 = new Node; temp1 = head1;
    Node *temp2 = new Node; temp2= head2;
    Node *head3 = new Node;
    Node *temp = new Node;
    if(temp1->data<=temp2->data)
    {
        head3 = temp1;
        temp  = head3;
        temp1=temp1->next;
    }
    
    else
    {
        head3 = temp2;
        temp  = head3;
        temp2=temp2->next;
    }
    
    while(1)
    {
        if(temp1->data<=temp2->data)
        {
        
            temp->next= temp1;
            
            temp1=temp1->next;
            temp=temp->next;
        }
        else if(temp2->data<temp1->data&&temp1!=NULL)
        {
        	
            temp->next=temp2;
            temp=temp->next;
            temp2=temp2->next;
            
            
        }
        
        if(temp1==NULL)
        {
            while(temp2!=NULL)
            {
                temp->next=temp2;
                temp=temp->next;
                temp2=temp2->next;
            }
            
            break;
        }
        
        if(temp2==NULL)
        {
            while(temp1!=NULL)
            {
                temp->next=temp1;
                temp=temp->next;
                temp1=temp1->next;
            }
            
            break;
        }
        
      
    }
        
        
    
    return head3;
}