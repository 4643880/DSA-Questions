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

void insertAtTail(Node* &tail , Node* temp){
    tail -> next = temp;
    tail = temp;
}
Node* sortList(Node *head){
    // ==================================================
    // Approach 1
    // ==================================================
    int zeroCounter = 0;
    int oneCounter = 0;
    int twoCounter = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            zeroCounter++;
        }else if(temp -> data == 1){
            oneCounter++;
        }else if(temp -> data == 2){
            twoCounter++;
        }

        temp = temp -> next;
    }

    // Traversing Again & Replacing the elements
    temp = head;
    while(temp != NULL){
        if(zeroCounter != 0){
            temp -> data = 0;
            zeroCounter--;
        }else if(oneCounter != 0){
            temp -> data = 1;
            oneCounter--;
        }else if(twoCounter != 0){
            temp -> data = 2;
            twoCounter--;
        }

        temp = temp -> next;
    }

    return head;
    

    // ==================================================
    // Approach 2
    // ==================================================

    //Creating 3 Dummy Nodes  head>(dummy)<tail, both head & tail pointers pointing to dummy node
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* temp = head;
    // create separate list for 0s, 1s, 2s
    while(temp != NULL){
        int value = temp -> data;
        if(value == 0){
            insertAtTail(zeroTail, temp);
        }else if(value == 1){
            insertAtTail(oneTail, temp);
        }else if(value == 2){
            insertAtTail(twoTail, temp);
        }
        temp = temp -> next;
    }

    // Merge 3 sublists of 0s, 1s, 2s
    // E.g
    // zeroHead --- (dummy) -> (0) --- zeroTail
    // oneHead  --- (dummy) -> (1) -> (1) --- oneTail
    // twoHead  --- (dummy) -> (2) -> (2) --- twoTail

    // 1s list not empty
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }else{
        // 1s list empty
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    // Setup Head
    head = zeroHead -> next;
    
    // Delete Dummy Nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}