// Doubly Linked List //
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    
    }
};

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node* &head)
{
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &tail, Node* &head, int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;   
    }

}
void insertAtTail(Node* &tail, Node* &head, int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp; 
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail; 
    tail = temp;
    }
}
void inserAtPosition(Node* &tail, Node* &head, int position, int d)
{
    Node* temp = head;  // 1st we have to traverse 
    int cnt = 1;
    // insert at start
    if(position == 1)
    {
        insertAtHead(tail, head , d);
        return;
    }

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }
    // insert at end
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return; 
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;    
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}
void deleteNode(Node* &tail, Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
    
        int cnt = 1;

      while(cnt < position)
      {
        prev = curr;
        curr = curr->next;
        cnt++;
      }

          curr->prev = NULL;
          prev->next = curr->next;
          curr->next = NULL;

          delete curr;

        if(prev->next == NULL)
        {
            tail = prev;
        }
    }
}

int main()
{
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;
    print(head);

    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    insertAtHead(tail, head, 13);
    print(head);

    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    insertAtHead(tail, head, 8);
    print(head);
    
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    insertAtTail(tail, head, 25);
    print(head); 
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    inserAtPosition(tail, head, 2, 100);
    print(head);
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    inserAtPosition(tail, head, 1, 101);
    print(head);
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    inserAtPosition(tail, head, 7, 102);
    print(head);
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    deleteNode(tail, head, 7);
    // deleteNode(tail, head, 1);
    // deleteNode(tail, head, 3);
    // deleteNode(tail, head, 5);
    print(head);
    cout << " Head = " << head->data <<endl;
    cout << " Tail = " << tail->data <<endl;

    return 0;
}
  