
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

Node *make_List(vector<int> v)
{
    Node *head = new Node(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(v[i]);
    }
    return head;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// Node* removeDuplicates(Node* &head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }
//     Node* curr = head;

//     while(curr != NULL && curr->next != NULL)
//     {
//         Node* temp = curr;
//         while(temp->next != NULL)
//         {
//             if(curr->data == temp->next->data)
//             {
//                 // Node* next_next = temp->next->next;
//                 // Node* del = temp->next;
//                 // delete del;
//                 // temp->next = next_next;

//                 temp->next = temp->next->next; 
//             }
//             else{
//                 temp = temp->next;
//             }
//         }
//         curr = curr->next;
//     }
//     return head;
// }

Node* sortlist(Node* &head)
{
    int temp;
    if(head == NULL)
    {
        return NULL;
    }
    Node* curr = head;
    Node* index = NULL;

    while(curr != NULL)
    {
        index = curr->next;
        while(index != NULL)
        {
            if(curr->data > index->data)
            {
                temp = index->data;
                index->data = curr->data;
                curr->data = temp;
            }
            index = index->next;
        }
        curr = curr->next;
    }
    return head;
}
 
int main()
{
   vector<int> v = {5,3,5,1,3,2,2,4};
   Node *head = make_List(v);
   print(head);

   Node* abc = sortlist(head);
   print(head);


    return 0;
}