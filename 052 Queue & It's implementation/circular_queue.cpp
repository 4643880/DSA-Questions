#include <bits/stdc++.h> 
class CircularQueue{ 
    public:
    int *arr;
    int size;
    int front;
    int rear;
    // Initialize your data structure.
    CircularQueue(int n){
        this->size = n;
        this->arr = new int[n];
        front = -1;
        rear = -1;
    }
 
    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Step 1: empty or not
        // => (rear == (front -1) % (size -1) means it's circular e.g after popping first 2 elements space was empty in array , suppose rear points to index 2  & front points to index 3
        if((front == 0 && rear == size -1) || (rear == (front -1) % (size -1))  ){
           return false;
        }else if(rear == -1){
            // Step 2: single element
            // means came here to push 1st element
             rear = 0;
             front = 0;
             arr[rear] = value;       
             return true;    
        }else if(rear == size -1 && front != 0){
            // Step 3: has reached at the end, to maintain cyclic nature
            // if rear has reached at the end but have space in the front of array as I popped 2 elements
            rear = 0;
            arr[rear] = value;
            return true;
        }else{
            // Step 4: Normal  
            rear++;
            arr[rear] = value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){       
        // Step 1: empty
        if(front == -1){
            return -1;
        }
        // Store that need to delete and then reset it's value to -1
        int storeElement = arr[front];             
        arr[front] = -1;
        if(front == rear){
            // Step 2: have single element
            front = -1;          
            rear = -1;
        }        
        else if(front == size -1){
            // Step 3: has reached at the end, to maintain cyclic nature 
            front = 0;
        }else{            
            front++;
        }
        return storeElement;
    }
};