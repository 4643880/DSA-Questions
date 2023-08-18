
#include<iostream>
using namespace std;

class Node {
    public:
        int data; // data
        Node* next; // pointer that will store address of next node

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void reverse1(Node * &head, Node * current, Node * previous){
    // base case
    if(current == NULL){
        head = previous;
        return;
    }

    Node* forward = current -> next;

    reverse1(head, forward, current);
    current -> next = previous;
}

// It will return the head of reversed list
Node* reverse2(Node * head){
    // Base Case 
    // If the list is empty or contains only one value
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* headOfRemainingList = reverse2(head->next);
    // In the beginning head is at the first element
    head -> next -> next = head;
    head -> next = NULL;

    return headOfRemainingList;

}

Node* reverseLinkedList(Node *head)
{   
    // Solved with 2nd Recurisve Approach
    return reverse2(head);

    
    // Solved with Recursive Approach 1
    Node* previous = NULL;
    Node* current = head;

    reverse1(head, current, previous);
    return head;
    

    
    //  Solved With Iterative Approach
    // If the list is empty or contains only one value
    if(head == NULL || head->next == NULL){
        return head;
    }

    
    Node* previous = NULL;
    Node* current = head;

    while(current != NULL){
        Node* forward = current -> next;
        current -> next = previous;
        previous = current;
        current = forward;
    }

    return previous; 
}
