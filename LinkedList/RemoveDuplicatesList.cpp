//------------------Remove duplicates List(sorted List)-------------------//
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this -> data = data;
//         this -> next = NULL;
//     }
// };
// void insertAtTail(Node* &tail, int d)
// {
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;

// }
// Node* deleteDuplicates(Node* &head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }
//     Node* curr = head;
//     while(curr != NULL && curr->next != NULL)
//     {
//         if(curr->data == curr->next->data)
//         {
//             Node* next_next = curr->next->next;
//             Node* del = curr->next;
//             delete del;
//             curr->next = next_next;
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }
//     return head;
// }
// void print(Node* &tail)
// {
//     Node* temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node* node1 = new Node(1);

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);

//     insertAtTail(tail, 1);
//     insertAtTail(tail, 7);
//     insertAtTail(tail, 3);
//     insertAtTail(tail, 3);
//     insertAtTail(tail, 4);
//     insertAtTail(tail, 4);
//     print(head);

//     // cout << head->data<<endl;
//     // cout << tail->data << endl;

//     deleteDuplicates(head);
//     print(head);

//    return 0;
// }

/*              list Creat using Vector        */

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

// Node *make_List(vector<int> v)
// {
//     Node *head = new Node(v[0]);
//     for (int i = 1; i < v.size(); i++)
//     {
//         Node *temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = new Node(v[i]);
//     }
//     return head;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// Node* removeDuplicates(Node* &head)
// {
//     if(head == NULL)
//     {
//         return NULL;
//     }
//     Node* curr = head;
//     while(curr != NULL && curr->next != NULL)
//     {
//         if(curr->data == curr->next->data)
//         {
//             Node* next_next = curr->next->next;
//             Node* del = curr->next;
//             delete del;
//             curr->next = next_next;
//             // curr->next = curr->next->next;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }

// int main()
// {
//    vector<int> v = {1,1,2,3,3,3,4,5,5};
//    Node *head = make_List(v);
//    print(head);
//    Node* res = removeDuplicates(head);
//    print(res);

//     return 0;
// }

// //---------------Remove duplicates List(Unsorted List)-------------------//

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
Node* removeDuplicates(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* curr = head;

    while(curr != NULL && curr->next != NULL)
    {
        Node* temp = curr;
        while(temp->next != NULL)
        {
            if(curr->data == temp->next->data)
            {
                Node* next_next = temp->next->next;
                Node* del = temp->next;
                delete del;
                temp->next = next_next;
            }
            else{
                temp = temp->next;
            }
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
   Node* res = removeDuplicates(head);
   print(res);

    return 0;
}

