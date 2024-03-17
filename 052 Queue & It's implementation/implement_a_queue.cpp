#include <bits/stdc++.h> 

class Queue {
public:
    int size;
    int * arr;
    int frontElement;
    int rear;
    Queue() {
        this->size = 10000;
        this->arr = new int[size];
        this->frontElement = 0;
        this->rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(frontElement == rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Check if not full
        if(size - rear >= 1){
            arr[rear] = data;
            rear++;
        }else{
            // cout << "Queue is full" << endl;
        }
    }

    int dequeue() {
        // check if not empty
        if(rear > 0){      
            int storeElement = arr[frontElement];      
            arr[frontElement] = -1;
            frontElement++;
            // It means at the left size all elements are -1 that are cosuming memory so
            if(frontElement == rear){
                frontElement = 0;
                rear = 0;
            }
            return storeElement;
        }else{
            return -1;
            // cout << "Queue is empty" << endl;
        }
    }

    int front() {
        if(frontElement == rear){
            return -1;            
        }else{
           return arr[frontElement];
        }
    }
};