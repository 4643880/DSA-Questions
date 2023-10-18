#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    private:
    Node* getReversedList(Node* head){
        //   1 2 3 => 3 2 1
        // p c n
        Node* current = head;
        Node* previous = NULL;
        Node* next = NULL;
        
        while(current != NULL){
            // befre cutting the pointer storing the remaining list to track it
            next = current -> next;
            // Cutting the current -> next pointer and pointing to previous 
            current -> next = previous;
            
            // Increase 1 step ahead for iteration
            previous = current;
            current = next;
        }
        return previous;
    }
    
    // Function with Genaric Approach
    private:
    struct Node* addLists(struct Node* &first, struct Node* &second){
        // Step 1: In the beginning carry will be zero
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        // Step 2: Find Sum 
        while(first != NULL && second != NULL){
            
            int sum = carry + first -> data + second -> data;
            
            // Step 3: Find Last Digit of sum using digit%10 (21%10)
            int digit = sum % 10;
            
            // Step 4: Create Node for a digit and add in answer linkedlist
            insertAtTail(ansHead, ansTail, digit);
            
            // Step 5: Find carry digit/10 (21/10)
            carry = sum/10;
            
            first = first -> next;
            second = second -> next;
        }
        
        // if list 1 is greater than list 2
        while(first != NULL){
            int sum = carry + first -> data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            
            first = first -> next;
        }
        
        // if list 2 is greater than list 1
        while(second != NULL){
            int sum = carry + second -> data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            
            second = second -> next;
        }
        
        // if at the end carry is not zero
        while(carry != 0){
            int sum = carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
        }
        
        return ansHead;
        
    }

    // Function with Optimized Approach
    private:
    struct Node* addLists(struct Node* &first, struct Node* &second){
        // Step 1: In the beginning carry will be zero
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        // Step 2: Find Sum 
        while(first != NULL || second != NULL || carry != 0){
            int value1 = 0;
            int value2 = 0;
            if(first != NULL)
                value1 = first -> data;

            if(second != NULL)
                value2 = second -> data;

            int sum = carry + value1 + value2;
            
            // Step 3: Find Last Digit of sum using digit%10 (21%10)
            int digit = sum % 10;
            
            // Step 4: Create Node for a digit and add in answer linkedlist
            insertAtTail(ansHead, ansTail, digit);
            
            // Step 5: Find carry digit/10 (21/10)
            carry = sum/10;
            
            if(first != NULL)
                first = first -> next;
            if(second != NULL)
                second = second -> next;
        }

        return ansHead;        
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int digit){
        Node* temp = new Node(digit);
        // if list is empty
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail -> next = temp;
            tail = tail -> next; // or tail = temp
        }
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // As we know that we start to add the numbers from right side, so we'll reverse lists
        
        // Step 1: Reverse Input LL
        first = getReversedList(first);
        second = getReversedList(second);
        
        // Step 2: Add two lists
        Node* ans = addLists(first, second);
        
        // Step 3: Reverse answer list to get correct result
        ans = getReversedList(ans);
        
        return ans;
    }
}; 