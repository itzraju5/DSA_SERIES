#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}
void print(Node* &tail)
{
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
//----------------------simple approach----------------------//
// int getLength(Node* head)
// {
//     int len = 0;

//     while(head != NULL)
//     {   
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// Node *findMiddle(Node* &head) 
// {
//     int len = getLength(head);

//     int ans = (len/2);
//     if(len % 2 == 0)
//     {
//         ans = ans-1;
//     }
//     Node* temp = head;
//     int cnt = 0;
//     while(cnt < ans)

//     {
//         temp = temp->next;
//         cnt++;
//     }  
//     cout << temp->data << endl;
//     return temp;  
// }
//-----------------------------------------------------------//


/*       Optimal silution    */

// Node* getMiddle(Node* head)
// {
//     if(head = NULL) return NULL;   // for empty
//     if(head->next == NULL) return head;   // for one node
//     if(head->next->next == NULL) return head->next;  // for 2 node

//     Node* slow = head;
//     Node* fast = head->next;

//     while(fast != NULL)
//     {
//         fast = fast->next;
//         if(fast != NULL)
//         {
//             fast = fast->next;
//         }
//         slow = slow->next;
//     }
//     return slow;
// }
// Node *findMiddle(Node* head) 
// {
//     return getMiddle(head);
// }



Node *findMiddle(Node* head) 
{
    // if(head == NULL) 
    // {
    //     return NULL; // for empty
    // }   
    // if(head->next == NULL)
    // {
    //     return head;
    // }   // for one node
    // if(head->next->next == NULL) 
    // {
    //     return head->next;  // for 2 node    ----> actually this is not needed
    // }
    Node* slow = head;
    Node* fast  = head->next;

    while(fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    // cout << slow->data;
    return slow;
 
}
int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    // insertAtTail(tail, 6);
    print(head);

    Node* res = findMiddle(head);
    print(res);

    

   return 0;
}
