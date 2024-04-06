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

// int main()
// {
// Node *node1 = new Node(10);
// Node *node1;
// node1 = new Node(10);

//     cout << node1 -> data << endl;
//     cout << node1 -> next << endl;

//     return 0;
// }

//------------------------------------ Singly Linked list-----------------------------------//

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:

//     int data;
//     Node *next;
// };
// void printList(Node *n)
// {
//     while (n != NULL)
//     {
//         cout << n->data << " ";
//         n = n->next;

//     }
// }

// int main()
// {
//     Node *head = NULL;
//     Node *second = NULL;
//     Node *third = NULL;

//     head = new Node();
//     second = new Node();
//     third = new Node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;

//     printList(head);

//     return 0;
// }

//--------------------------------InsertAtHead-------------------------------//

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

// int main()
// {

//     Node *node1 = new Node(10);

//     Node* head = node1;
//     print(head);

//     InsertAthead(head,12);
//     print(head);

//     InsertAthead(head,15);
//     print(head);

//     return 0;
// }



/*********************************Tail***************************************/

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
int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 12);

    print(head);

    insertAtTail(tail, 15);
    print(head);

    cout << tail->data << endl;
    cout << head->data<<endl;

   return 0;
}

/*********************************insertAtPosition***************************************/


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

// void insertAthead(Node *&head, int d)
// {
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;

// }
// void insertAtTail(Node* &tail, int d)
// {
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
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
// void inserAtPosition(Node* &tail, Node* &head, int position, int d)
// {
//     Node* temp = head;  // 1st we have to traverse 
//     int cnt = 1;
//     // insert at start
//     if(position == 1)
//     {
//         insertAthead(head , d);
//         return;
//     }

//     while(cnt < position - 1)
//     {
//         temp = temp -> next;
//         cnt++;
//     }
//     // insert at end
//     if(temp->next == NULL){
//         insertAtTail(tail, d);
//         return;
//     }
    
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp->next = nodeToInsert;

// }

// int main()
// {

//     Node *node1 = new Node(10);

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);

//     insertAtTail(tail,12);
//     print(head);

//     insertAtTail(tail,15);
//     print(head);

//     // inserAtPosition(head, 3, 22);
//     // inserAtPosition(head, 1, 22);
//     inserAtPosition(tail, head, 4, 22);
//     print(head);

//     cout << " Head = " << head ->data <<endl;
//     cout << " Tail = " << tail->data <<endl;
    
//     return 0;
// }

//-------------------------------- DELETION -----------------------------------//


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
//     // destructor
//      ~Node()
//         {
//             int value = this->data;
//             // memory free
//             if(this->next != NULL)
//             {
//                 this->next = NULL;
//                 delete next;
//             } 
//             cout << " memory is free for node with data " << value << endl; 
//         }
     
// };

// void insertAthead(Node *&head, int d)
// {
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;

// }
// void insertAtTail(Node* &tail, int d)
// {
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// void inserAtPosition(Node* &tail, Node* &head, int position, int d)
// {
//     Node* temp = head;  // 1st we have to traverse 
//     int cnt = 1;
//     // insert at start
//     if(position == 1)
//     {
//         insertAthead(head , d);
//         return;
//     }

//     while(cnt < position - 1)
//     { 
//         temp = temp -> next;
//         cnt++;
//     }
//     // insert at end
//     if(temp->next == NULL){
//         insertAtTail(tail, d);
//         return;
//     }
    
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp -> next;
//     temp->next = nodeToInsert;

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

// void deleteNode(int position,Node* &tail, Node* &head)
// {
//     //start node
//     if(position == 1)
//     {   
//         Node* temp = head;
//         head = head->next;
        
//         temp->next = NULL;
//         delete temp;
//     }
//     else{
//         // any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while (cnt < position)
//         {
//             prev = curr;
//             curr = curr->next;
//             cnt++;

//         }
        
//         prev->next = curr->next;

        
//         curr->next = NULL;
//         delete curr;

//         if(prev->next == NULL){
//             tail = prev;
//         }
//     }
// }
// int main() 
// {
//     Node *node1 = new Node(10);

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);

//     insertAtTail(tail,12);
//     print(head);

//     insertAtTail(tail,15);
//     print(head);

//     // inserAtPosition(head, 3, 22);
//     // inserAtPosition(head, 1, 22);
//     inserAtPosition(tail, head, 4, 22);
//     print(head);


//     // Node* node1 = new Node(10);
//     // Node* node2 = new Node(12);
//     // Node* node3 = new Node(15);
//     // Node* node4 = new Node(22);

//     // Node* tail = node1;
//     // Node* head = node1;
//     // node1->next = node2;
//     // node2->next = node3;
//     // node3->next = node4;

//     cout << " Head = " << head ->data <<endl;
//     cout << " Tail = " << tail->data <<endl;

//     // deleteNode(1,tail,head);
//     // deleteNode(2,tail,head);
//      deleteNode(3,tail,head);
//     // deleteNode(4,tail,head);

//     print(head);

//     cout << " Head = " << head->data <<endl;
//     cout << " Tail = " << tail->data <<endl;
    
//     return 0;
// }






