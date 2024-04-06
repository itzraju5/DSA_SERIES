#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d)
{
    // empty list
     if(tail == NULL)
     {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
     }
     else
     {
        // non-empty list
        Node* curr = tail;
        while(curr->data != element)
        { 
            curr = curr->next;
        }
        // element found & curr representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

     }
}
void print(Node* &tail)
{
    Node* temp = tail;

    if(tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << endl;

}

bool isCircularList(Node* &head)
{
    // empty LinkedList
    if(head == NULL)
    {
        return true;
    }
    // >=1 node case 
    Node* temp = head->next;

    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == head)
    {
        return true;
    }
    return false;
    
}
   
int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    cout << tail->data<<endl;

    insertNode(tail, 3, 5);
    print(tail);
   
 
    insertNode(tail, 5, 7);
    print(tail);

/*
    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);              

*/

    if(isCircularList(tail))
    {
        cout << true<<endl;
    }
    else{
        cout << false << endl;
    }
    return 0;

}

