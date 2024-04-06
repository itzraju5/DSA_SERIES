
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
Node* sortlistInsertion(Node* head)
{
     Node* start = new Node(INT_MIN);
        start->next = head;
        Node* prev = start;
        Node* curr = head;

        if(head == NULL) return NULL;
        if(head->next == NULL)return head;

       while(curr)
       {
           if(curr->next && (curr->next->data < curr->data))
           {
               while(prev->next && (prev->next->data< curr->next->data))
               {
                   prev = prev->next;
               }
               Node* temp = prev->next;
               prev->next = curr->next;
               curr->next = curr->next->next;
               prev->next->next = temp;
               prev = start;
           }
           else
           {
           curr = curr->next;
           }
       }   
        return start->next;
}    
 
int main()
{
   vector<int> v = {4,2,1,3};
   Node *head = make_List(v);
   print(head);

   Node* abc = sortlistInsertion(head);
   print(abc); 


    return 0;  
}