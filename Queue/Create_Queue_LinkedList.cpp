#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
 
class Queue {
    private:
        Node* front;
        Node* rear;

    public:
        Queue() {
            front = nullptr;
            rear = nullptr;
        }

        bool isEmpty() {
            return front == nullptr;
        }

        void enqueue(int data) {
            Node* newNode = new Node(data);
            if (isEmpty()) {
                 
                front = newNode;
                rear = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }
        }

        int dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty. Cannot dequeue." << endl;
                return -1;
            }
            int data = front->data;
            Node* temp = front;
            front = front->next;
            delete temp;
            return data;
        }

        int peek() {
            if (isEmpty()) {
                cout << "Queue is empty. No front element." << endl;
                return -1;
            }
            return front->data;
        }
};

int main() {
    
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeue: " << q.peek() << endl;

    if (q.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    return 0;
}
 