

#include<iostream>
using namespace std;
#include<map>

class Node {
    public:
        int data; // data
        Node* next; // pointer that will store address of next node

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructure
    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;    
        }
        cout << "Memory is free for Node with Data: " << value << endl;
    }
};



void insertAtTail(Node* &tail , int myData){
    Node * temp = new Node(myData);
    tail->next = temp;
    tail = tail->next;
}


Node* floydAlgoToDetectLoop(Node* head){
    if(head == NULL)
        return NULL;

    Node* slow = head; // slow i = i + 1
    Node* fast = head; // fast i = i + 2;

    while(slow != NULL && fast != NULL){

        // Fast will jump twice
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        // Slow will just onece
        slow = slow -> next;
        
        // Cycle is present
        if(slow == fast){
            cout << "Both pointers slow and fast are at: " << fast -> data << endl;
            // return slow;    // Can return anyone 
            return fast;    
        }        
    }

    // Cycle is not present
    return NULL;
}



Node* findStartingNodeOfLoop(Node* head){
    
    if(head == NULL)
        return NULL;
    
    // this function can return slow or fast because both will be same 
    // Suppose it returns fast
    Node* intersectionPointFast = floydAlgoToDetectLoop(head);

    // At the intersection point, both slow and fast pointer were at the same point but I'll reset slow pointer
    // Slow pointer will assign to head then again both pointer will traverse with (equal speed)
    Node* slow = head;
    
    while(slow != intersectionPointFast){
        slow = slow -> next;
        intersectionPointFast = intersectionPointFast -> next;
    }

    return slow;
    // return fast; // can return anyone

}


void removeCycleOrLoop(Node* head){
    Node* startPointOfLoop = findStartingNodeOfLoop(head);
    Node* temp = startPointOfLoop;

    while(temp -> next != startPointOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "   ";
        temp = temp->next;
    }
    cout << endl;
}



int main(){
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;

    print(head);

    insertAtTail(tail, 8);
    insertAtTail(tail, 6);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);

    print(head);

    // Now pointing the last eleent to the 2nd element to create the cycle ( 2 is connect with 8)
    tail -> next = head -> next;

    
    if(floydAlgoToDetectLoop(head) != NULL){
        cout << "Floyd Cycle is present" << endl;
    }else{
        cout << "Floyd Cycle is not present" << endl;
    };


    cout << "Starting Node of Loop is: " <<findStartingNodeOfLoop(head) -> data << endl;

    removeCycleOrLoop(head);

    if(floydAlgoToDetectLoop(head) != NULL){
        cout << "Floyd Cycle is present" << endl;
    }else{
        cout << "Floyd Cycle is not present" << endl;
    };

    return 0;
}