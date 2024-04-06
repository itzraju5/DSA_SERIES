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

Node* solve(Node* &head1, Node* &head2)
{
    if(head1->next == NULL)
    {
        head1->next = head2;
        return head1;
    }

    Node* curr1 = head1;
    Node* curr2 = head2;
    Node* next1 = curr1->next;
    Node* next2 = curr2->next;

    while(next1 != NULL && curr2 != NULL)
    {
        if(curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else
        {  
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL)
            {
                curr1 -> next = curr2;
            }
        }
    }
    return head1;
}

Node* merge_Sort_List(Node *&head1, Node* &head2)
{
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    if(head1->data <= head2->data)
    {
        solve(head1, head2);
        return head1;
    }
    else
    {
        solve(head2, head1);
        return head2;
    }
}
int main()
{
    vector<int> v1 = {1, 3, 5};
    vector<int> v2 = {2, 4, 5};
    Node *head1 = make_List(v1);
    Node *head2 = make_List(v2);
    print(head1);
    print(head2);

    Node *abc = merge_Sort_List(head1,head2);
    print(abc);

    return 0;
}     

