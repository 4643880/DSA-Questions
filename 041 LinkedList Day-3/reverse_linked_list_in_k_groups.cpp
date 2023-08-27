


#include<iostream>
using namespace std;


class Node {
  public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
};


Node* kReverse(Node* head, int k) {
    
    if(head == NULL || head -> next == NULL){
        return head;
    }
    

    // Step 1: E.g if k = 2 then Reverse first 2 nodes
    Node* previous = NULL;
    Node* current = head;   
    Node* forward = NULL;     
    int counter = 0;

    while(current != NULL && counter < k){
        forward = current -> next;
        // Pointing to the previous address
        current -> next = previous;
        // Iterating one step ahead
        previous = current;
        current = forward;
        counter++;
    }
    // e.g k = 2 and values are 7, 9
    // After completing the iteration previous will be at the last element (9)
    // Head was already at the first element & always will be at the first element (7)
    // After completing the iteration current will be at the remaining part 

    // Step 2: Recursion will handle
    if (current != NULL) {
        // Connecting the remaining part
        head->next = kReverse(current, k);
    }


    // Step 3: Return head of Reversed Linked List
    return previous;
}