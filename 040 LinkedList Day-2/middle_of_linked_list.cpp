


#include<iostream>
using namespace std;

class Node{
    public:
        int data; // data
        Node* next; // pointer that will store address of next node

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node* head){
    Node* temp = head;
    int counter = 0;

    // traversing
    while(temp != NULL){
        temp = temp->next;
        counter++;
    }

    return counter;

}

Node *findMiddle(Node *head) {
    int length = getLength(head);
    
    
    int mid = (length/2) + 1;
    // cout << mid << endl;
    Node* myNode = head;
    // cout << myNode->data << endl;
    int count = 0;
    while(count < mid-1){
        myNode = myNode-> next;
        count++;
    }
    return myNode;
    // cout << myNode->data << endl;
}