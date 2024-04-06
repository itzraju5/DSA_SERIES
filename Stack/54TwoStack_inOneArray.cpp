#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1, top2;

    Stack(int n)
    {
        size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int d)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = d;
        }
        else
        {
            cout << "Stack1 Overflow" << endl;
        }
    }

    void push2(int d)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = d;
        }
        else
        {
            cout << "Stack2 Overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout << "Stack1 Underflow" << endl;
        }
    }
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            cout << "Stack2 Underflow" << endl;
        }
    }
    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << " Stack1 is Empty " << endl;
            return -1;
        }
    }
    int peek2()
    {
        if (top2 < size)
        {
            return arr[top2];
        }
        else
        {
            cout << " Stack1 is Empty " << endl;
            return -1;
        }
    }
};
int main()
{
    Stack s(5);

    s.push1(3);
    s.push1(5);
    s.push2(10);
    s.push2(15);
    s.push2(20);

    cout << s.pop1() << endl;
    cout << s.pop2() << endl;
    cout << s.pop2() << endl;

    cout << "peek1: " <<s.peek1() << endl;
    cout << "peek2: " <<s.peek2()<< endl;


    return 0;
}

