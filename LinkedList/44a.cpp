
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
// };
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
//     if(position == 1)
//     {   
//         Node* temp = head;
//         head = head->next;
        
//         temp->next = NULL;
//         delete temp;
//     }
//     else{
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
        
//         if(prev->next == NULL)
//         {
//             tail = prev;
//         }
//     }
// }
// int main() 
// {

//     Node* node1 = new Node(10);
//     Node* node2 = new Node(12);
//     Node* node3 = new Node(15);
//     Node* node4 = new Node(22);
//     Node* node5 = new Node(25);

//     Node* tail = node5;
//     Node* head = node1;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node5;
//     print(head);


//     // deleteNode(1,tail,head);
//     // deleteNode(3,tail,head);
//     // deleteNode(4,tail,head);
//     deleteNode(5,tail,head);
//     print(head);

//     cout << " Head = " << head->data <<endl;
//     cout << " Tail = " << tail->data <<endl;
    
//     return 0;
// }

//---------------------------------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int d)
//     {
//         data = d;
//         next = NULL;
//     }

// };
// Node* deleteFromStart(Node* &head)
// {
//     return head->next;
// }
// Node* deleteGivenNode(Node* &head, int val)
// {
//     if(head->data == val){ return head->next;}

//     Node* temp = head;
//     Node* prev = NULL;

//     while (temp->data != val)
//     {
//         prev = temp; 
//         temp = temp->next;
//     }
//     prev->next = temp->next;
//     return head;

// }
// Node* deleteFromEnd(Node* head)
// {
//     Node* temp = head;
//     while(temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = NULL;
// }
// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     print(head);

//     // head = deleteFromStart(head);
//     head = deleteGivenNode(head, 30);
//     // head = deleteFromEnd(head);
//     print(head);


//     return 0;
// }


//-------------------------------- DELETION -----------------------------------//

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int d)
//         {
//             this->data = d;
//             this->next = NULL;
//         }
// };

// void insertAtHead(Node* &head, int val)
// {
//     Node* temp = new Node(val);
//     temp->next = head;
//     head = temp;
// }
// void insertAtTail(Node* &tail, int val)
// {
//     Node* n = new Node(val);
//     if(tail == NULL)
//     {
//         tail = n;
//         return;
//     }
//     Node* temp = tail;
//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
   
// }
//  void inserAtPosition(Node* &head, int position, int d)
// {
//     Node* temp = head;  // 1st we have to traverse 
//     int cnt = 1;
//     // insert at start
//     if(position == 1)
//     {
//         insertAtHead(head , d);
//         return;
//     }

//     while(cnt < position - 1)
//     {
//         temp = temp -> next;
//         cnt++;
//     }
//     // insert at end
//     if(temp->next == NULL){
//         insertAtTail(head, d);
//         return;
//     }
    
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp->next = nodeToInsert;

// }
// void print(Node* &head)
// {
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         cout << temp -> data << "->";
//         temp = temp -> next;
//     }
//     cout << "NULL" << endl;
// }
// int main()
// {   
//     Node* head = NULL;

//     insertAtTail(head, 12);
//     insertAtTail(head, 15);
//     insertAtTail(head, 25);

//     print(head);
//     insertAtHead(head ,10);
//     print(head);
//     inserAtPosition(head ,2, 30);
//     print(head);



//     return 0;
// }



