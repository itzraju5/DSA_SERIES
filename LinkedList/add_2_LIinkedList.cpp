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

Node *reverse(Node *&head)
{
    // if(head == NULL || head->next == NULL)
    // {
    //     return head;
    // }
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{

    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
Node *add(Node* &first, Node* &second)
{
    
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL )
    {
        int val1 = 0;
        if(first != NULL)
        {
            val1 = first->data;
        }

        int val2 = 0;
        if(second != NULL)
        {
            val2 = second->data;
        }

        int sum = carry + val1 + val2;
        cout << "Sum= " <<sum <<endl;

        int digit = sum % 10;
        cout << "digit= " <<digit <<endl;
       
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
        cout << "carry= " <<carry<<endl; 
        if(first != NULL)
        {
            first = first->next;
        }
        if(second != NULL)
        {
            second = second->next;
        }

    }

    return ansHead;
}

Node *addTwoNumbers(Node* &l1, Node* &l2)
{
    l1 = reverse(l1);
    l2 = reverse(l2);
    Node *ans = add(l1, l2);

    ans = reverse(ans);

    return ans;
}

int main()
{
    vector<int> v1 = {2, 4, 9};
    vector<int> v2 = {5, 6, 4, 9};
    Node *head1 = make_List(v1);
    Node *head2 = make_List(v2);
    print(head1);
    print(head2);

    Node *abc = add(head1, head2);
    print(abc);

    return 0;
}
