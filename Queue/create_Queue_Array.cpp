#include <bits/stdc++.h> 
using namespace std;

class Queue {
        int *arr;
        int size;
        int rear;
        int qfront;

    public:
        Queue(int n) {

            this->size = n;
            arr = new int[size];
            qfront = 0;
            rear = 0;
        }

        bool isEmpty() {
            if(rear == qfront)
            {
                return true;
            }
            else{
                return false;
            }
        }
    
        void enqueue(int data) {
            if(rear == size)
            {
                cout << "Queue is full";
            }
            else
            {
                arr[rear] = data;
                rear++;
            }
        }

        int dequeue() {
            if(rear == qfront)
            {
                return -1;
            }
            else
            {
                int ans;
                ans = arr[qfront];
                qfront++;
                // To prevent the westage of memory put this if condition
                if(qfront == rear)
                {
                    qfront = 0;
                    rear = 0;
                }
                return ans;
            }
        }

        int front() {
            if(rear == qfront)
            {
                return -1;
            }
            else{
                return arr[qfront];
            }
        }
};

int main()
{
    int n;
    cin >> n;

    Queue q(n); // Create a queue of size n

    q.enqueue(1);
    q.enqueue(2); 
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.front() << endl; // Display front element

    q.dequeue(); // Dequeue an element
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeue: " << q.front() << endl; // Display front element

    if (q.isEmpty())
    {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}