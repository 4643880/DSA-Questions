

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
     // Creating New Node
    Node * temp = new Node(myData);
    tail->next = temp;
    tail = tail->next;
}

bool detectLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;
    while(temp != NULL){       
        // Cycle is present
        if(visited[temp] == true){
            cout << "Cycle is present at index No: " << visited[temp] << " & Value is: " << temp->data << endl;
            return true;
        }
        
        visited[temp] = true;
        temp = temp -> next;
        
    }
    return false; 
}


bool floydCycleDetection(Node* head){
    if(head == NULL)
        return false;

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
            cout << "Both pointers slow and fast are at: " << slow -> data << endl;
            return true;    
        }        
    }

    // Cycle is not present
    return false;

}


void print(Node* &head){
    // Because head is pass by reference so, i don't want to do changes in original head
    // I'll create a temporary pointer then will assign head to it.
    Node* temp = head;
    // temp is the address so will check through loop until it does not equal to NULL
    while(temp != NULL){
        cout << temp->data << "   ";
        // HINT: i = i + 1;
        // In the beginning temp is at the first index, Now loop should traverse at the second index while temp.next already have the address of next index
        temp = temp->next;
    }
    cout << endl;
}



int main(){
    // Creating New node in the Heap Memory
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Pointing the tail at node1
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

    if(detectLoop(head) == 1){
        cout << "Cycle is present" << endl;
    }else{
        cout << "Cycle is not present" << endl;
    };


    if(floydCycleDetection(head) == 1){
        cout << "Floyd Cycle is present" << endl;
    }else{
        cout << "Floyd Cycle is not present" << endl;
    };

    return 0;
}