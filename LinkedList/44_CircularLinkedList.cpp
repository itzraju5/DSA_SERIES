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

void deleteNode(Node* &tail, int value)
{
    // empty list
    if(tail == NULL)
    {
        cout << " List is Empty plz check again" << endl;
        return;   
    }
    
    else
    { 
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // 1 node LinkedList
        if(curr == prev)
        {
            tail = NULL;
        }

        // >=2 Node LinkedList
        if(tail == curr)  // delete element 3 we use if condition Bcz (tail-> data = 3). 
        {
            tail = curr->next;         // tail = prev;   // 10 4 5 6 7 9
            //or tail = prev->next;   
        }
        curr->next = NULL;
        delete curr; 

    }

}
int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

/*
    insertNode(tail, 3, 5);
    print(tail);
   

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);               // 3 4 5 6 7 9 10

*/

    //cout << " tail=" << tail->data << endl;    // tail = 3

    deleteNode(tail, 3);        // 10 4 5 6 7 9
    // deleteNode(tail, 10);     // 3 4 5 6 7 9
    // deleteNode(tail, 6);       // 3 4 5 7 9 10 
    print(tail);
    
    cout << " Tail=" << tail->data<<endl;

    // deleteNode(tail, 3);
    // print(tail);
     
    return 0;
}

