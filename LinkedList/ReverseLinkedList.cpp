// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAthead(Node *&head, int d)
// {
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;

// }
// void print(Node* &head)
// {
//     Node* temp1 = head;
//     while (temp1 != NULL)
//     {
//         cout << temp1 -> data << " ";
//         temp1 = temp1 -> next;

//     }
//     cout << endl;
// }

// Node* reverseLinkedList(Node* &head)
// {
//     if(head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward;
//     while(curr != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     head = prev;
    
//     return head;

// }

// int main()
// {

//     Node *node1 = new Node(10);
//     Node* head = node1;
//     InsertAthead(head,12);
//     InsertAthead(head,15);
//     InsertAthead(head,17);
//     print(head);

//     reverse(head);
//     print(head);
//     return 0;
// }

/*---------------------Using Recursion Method----------------------------*/


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAthead(Node *&head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}
void print(Node* &head)
{
    Node* temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;

    }
    cout << endl;
}

// void reverse(Node* &head, Node* curr, Node* prev)
// {
//     if(curr == NULL)
//     {
//         head = prev;
//         return;
//     }
//     Node* forward = curr->next;
//     reverse(head, forward, curr);
    
//     curr->next = prev;
// }
// Node* reverseLinkedList(Node* &head)
// {
//     Node* curr = head;
//     Node* prev = NULL;
//     reverse(head, curr, prev);
   
//     return prev; 
     
// }


Node* reverse1(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* chotahead = reverse1(head->next);
    
    head->next->next = head;       //  Node* Head = head->next;
    head->next = NULL;             //  Head->next = head;  
                                   //  head->next = NULL;
    return chotahead;
}

Node* reverseLinkedList(Node* &head)
{
    
    return reverse1(head);
        
}

int main()
{
    Node *node1 = new Node(9);

    Node* head = node1;
    InsertAthead(head,7);
    InsertAthead(head,5);
    InsertAthead(head,3); 
    print(head);

    Node* Head = reverseLinkedList(head);
    print(Head);

    return 0;
}