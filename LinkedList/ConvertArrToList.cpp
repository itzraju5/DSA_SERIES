// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:

//     int data;
//     Node* next;
//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;

//     }
// };

// void insertNode(Node* &tail, int item)
// {
//     Node* temp = new Node(item);
//     Node* ptr;
//     // temp->data = item;
//     // temp->next = NULL;

//     if(tail == NULL)
//     {
//         tail = temp;
//     }
//     else
//     {
//        ptr = tail;
//        while(ptr->next != NULL)
//        {
//             ptr = ptr->next;    
//        }
//        ptr->next = temp;
//     } 
//     cout << "Tail=" << tail->data <<endl; 
// }

// Node* arrayToList(int arr[], int n)
// {
//     Node* root = NULL;
//     for(int i=0; i<n; i++)
//     {
//         insertNode(root, arr[i]);
//     }
//     return root;
// }
// void print(Node* &head)
// {
//     Node* temp1 = head;
//     while (temp1 != NULL)
//     {
//         cout << temp1 -> data << "->";
//         temp1 = temp1 -> next;

//     }
//     cout << "NULL";
// }

// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0; i<n ;i++)
//     {
//         cin >> arr[i] ;
//     }

//     Node* root = arrayToList(arr, n);
//     print(root);
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1,1,2,3,5};
    list<int> :: iterator it;

    for(it=myList.begin(); it != myList.end(); it++)
    {
        cout << *it <<"->";
    }
    cout << "NULL";
    return 0;
}