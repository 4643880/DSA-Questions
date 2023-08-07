
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


void insertAtHead(Node* &head, int myData){
    // Creating New Node
    Node * temp = new Node(myData);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail , int myData){
     // Creating New Node
    Node * temp = new Node(myData);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head, int position, int myData){

    Node * temp = head;
    int counter = 1; // In the beginning head is at the first postion if I want to insert at 3rd 

    // E.g I want to insert at n position and I have to traverse until i dont' reach at n-1
    while(counter < position -1){
        temp = temp->next; // traversing
        counter++;
    }


    // Creating a node for myData
    Node* nodeToInsert = new Node(myData);
    // Because previous block contains the addresss of next block
    nodeToInsert->next = temp->next; // temp contains the address of next block because I already have traversed till n-1
    temp->next = nodeToInsert; // Assigning new address 
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

    // Pointing the head at node1
    Node* head = node1;
    // Pointing the tail at node1
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 16);
    insertAtTail(tail, 8);
    insertAtTail(tail, 6);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);
    insertAtPosition(head, 5, 50);


    print(head);

    return 0;
}