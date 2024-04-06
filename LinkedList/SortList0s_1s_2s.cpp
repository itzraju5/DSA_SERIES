
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

void insertAtTail(Node *&tail, Node *&curr)
{

    tail->next = curr;
    tail = curr;
}

Node *sort0s1s2s(Node *&head)
{

    // int zeroCount = 0;
    // int oneCount = 0;
    // int twoCount = 0;

    // Node* temp = head;
    // while(temp != NULL)
    // {
    //     if(temp -> data == 0)
    //     {
    //         zeroCount++;
    //     }
    //     else{
    //         if(temp -> data == 1)
    //         {
    //             oneCount++;
    //         }
    //         else{
    //             if(temp -> data == 2)
    //             {
    //                 twoCount++;
    //             }
    //         }
    //     }
    //     temp = temp->next;
    // }

    // temp = head;
    // while(temp != NULL)
    // {
    //     if(zeroCount != 0)
    //     {
    //         temp -> data = 0;
    //         zeroCount--;
    //     }
    //     else{
    //         if(oneCount != 0)
    //         {
    //             temp -> data = 1;
    //             oneCount--;
    //         }
    //         else{
    //             if(twoCount != 0)
    //             {
    //                 temp -> data = 2;
    //                 twoCount--;
    //             }
    //         }
    //     }
    //     temp = temp -> next;
    // }
    // return head;

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else
        {
            if (value == 1)
            {
                insertAtTail(oneTail, curr);
            }
            else
            {
                if (value == 2)
                {
                    insertAtTail(twoTail, curr);
                }
            }
        }
        curr = curr->next;
    }

    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead -> next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
int main()
{
    vector<int> v = {1, 0, 2, 1, 2};
    Node *head = make_List(v);
    print(head);

    Node *abc = sort0s1s2s(head);
    print(abc);

    return 0;
}