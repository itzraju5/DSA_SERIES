#include <bits/stdc++.h>
using namespace std;


class MyCircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        else if(front == -1) // pahla element dalne ja raha h 
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if(rear == size-1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
        {
            return false;
        }
        else if(rear == front)  // single element h
        {
            front  = rear = -1;
        }
        else if(front == size-1) 
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return true;
    }
    
    int Front(){
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];
    }
    
    int Rear(){
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return ((front == 0 && rear == size-1) || ((rear+1)%size == front));
    }
};

int main() {
    int k;
    cout << "Enter the size of the circular queue: ";
    cin >> k;

    MyCircularQueue obj(k);

    int choice, value;
    while (true) {
        cout << "Enter operation (1: enQueue, 2: deQueue, 3: Front, 4: Rear, 5: isEmpty, 6: isFull, 0: Exit): ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value to enQueue: ";
                cin >> value;
                if (obj.enQueue(value))
                    cout << "Enqueued successfully.\n";
                else
                    cout << "Failed to enqueue. Queue is full.\n";
                break;
            case 2:
                if (obj.deQueue())
                    cout << "Dequeued successfully.\n";
                else
                    cout << "Failed to dequeue. Queue is empty.\n";
                break;
            case 3:
                cout << "Front element: " << obj.Front() << endl;
                break;
            case 4:
                cout << "Rear element: " << obj.Rear() << endl;
                break;
            case 5:
                if (obj.isEmpty())
                    cout << "Queue is empty.\n";
                else
                    cout << "Queue is not empty.\n";
                break;
            case 6:
                if (obj.isFull())
                    cout << "Queue is full.\n";
                else
                    cout << "Queue is not full.\n";
                break;
            case 0:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

// Thank you