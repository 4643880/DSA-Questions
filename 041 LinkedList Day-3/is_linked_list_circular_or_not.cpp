

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int myData){
        this->data = myData;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free for Node with Data: " << value << endl;
    }
};

// In the circular linkedlist we don't need head pointer just we can perform both actions using tail pointer 
void insertNode(Node* &tail, int element, int value){
    // Empty List: if the element does not exists in the list
    // 10|next, next will point to itself
    if(tail == NULL){
        Node* temp = new Node(value);

        temp->next = temp;
        tail = temp;
    }else {
        // NON Empty List: Assuming that the element already exists in the list
        // 10|next -- 12|next 14|next , 10 & 14 already exists now will insert 12
        Node* temp = tail;

        while(temp->data != element){
            temp = temp->next;
        }// After Traversing, have reached to exact position 

        Node* nodeToInsert = new Node(value);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }    
}

bool isCircularLinkedListOrNot(Node* tail){
    // Check is it empty or not
    if(tail == NULL){
        return false; // Null points to zero
    }

    // If it contains just 1 or more elements
    // Will start to traverse from the 2nd element
    Node* temp = tail -> next;
    while(temp != NULL && temp != tail){
        temp = temp -> next;       
    }

    // It means its circular linked list 
    if(temp == tail){
        return true;
    }

    // It's Not Circular Linked List
    return false; 

}


void print(Node* tail){
    // Storing the address into temp the will compare the condition in the while loop
    Node* temp = tail;

    do {
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);
    cout << endl;
}

int main(){

    Node* tail = NULL;

    // Inserting in Empty List, inserting 3
    insertNode(tail, 5, 3);
    print(tail);

    // Inserting After element, after 3 inserting 5
    insertNode(tail, 3, 5);
    print(tail);

    // Inserting After element, after 5 inserting 7
    insertNode(tail, 5, 7);
    print(tail);

    // Inserting in Middle, after 3 inserting 50
    insertNode(tail, 3, 50);
    print(tail);
   
    bool result = isCircularLinkedListOrNot(tail);
    if(result == true){
        cout << "It's a circular linked list..." << endl;
    }else {
        cout << "It's not a circular linked list..." << endl;
    }
    cout << result << endl;
    return 0;
}