
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

// bool check(vector<int> arr)
// {
//     int s = 0;
//     int e = arr.size()-1;

//     while(s<=e)
//     {
//         if(arr[s] != arr[e])
//         {
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }
// bool isPalindrome(Node* &head)
// {
//     vector<int> arr;
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }
//     return check(arr);
// }

// int main()
// {
//     vector<int> v = {1, 2, 3, 2, 1};
//     Node *head = make_List(v);
//     print(head);

//     cout <<(isPalindrome(head));

//     // print(abc);

//     return 0;
// }



//------------------------------------------------------//

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
Node* getMid(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    
    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome(Node *head)
    {
        if(head->next == NULL) return true;
        
        Node* middle = getMid(head);
        
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }


int main()
{
    vector<int> v = {1, 2, 3, 2, 1};
    Node *head = make_List(v);
    print(head);

    cout <<(isPalindrome(head));


    return 0;
}
