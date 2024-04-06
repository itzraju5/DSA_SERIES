#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

};

class Stack
{
    public:
        Node* head;
        int size;
        Stack()
        {
            head = NULL;
            size = 0;
        }
        
    void push(int d)
    {
        Node* temp = new Node();
        temp->data = d; 

        temp->next = head;
        head = temp;
        size++;
        cout << "Element: " << temp->data << " push Successfully" <<endl;     
    }

    int peek()
    {
        if(head == NULL)
        {
            cout<<"Stack is empty---"<<endl;
            return -1;
        }
        else{
            return head->data ;
        }
    }

    int pop()
    {
        if(head == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else{
            int res = head->data;
            head = head->next;
            size--;
            
            return res;
        }
    }

    bool isEmpty()
    {
        if(head == NULL)
        {
            
            return true;
        }
        else{
            return false;
        }
    }
    int sizeofstack()
    {
        return size;
    }
};
int main()
{   
    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    cout << s.peek() <<endl;
    s.pop();
    cout << s.peek() <<endl;

    if(s.isEmpty())
    {
        cout <<"Stack is empty mere dost " <<endl;
    }
    else{
        cout <<"Stack is not empty mere dost " <<endl;
    }
    cout << s.sizeofstack();


    return 0;
}