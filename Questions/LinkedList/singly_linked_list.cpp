
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    // create new node
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void deleteFromPosition(Node* &head, int position){
    Node* temp = head;
    // Starting case
    if(position == 1){
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return; // means should not be execute the following code
    }

    // Middle Case |10, |   |20, |  |30, |
    int counter = 1;
    Node* previous = NULL;
    while(counter < position){
        previous = temp;
        temp = temp->next;
        counter++;
    }

    
    previous->next = temp->next;
    temp->next = NULL;
    delete temp;
    
}

void insertAtPosition(Node* &head, Node* &tail,  int data, int position){
    Node* temp = head;

    // Starting Case
    if(position == 1){
        insertAtHead(head, data);
        return;
    }


    // Middle Case
    int counter = 1;
    while(counter < position -1){
        temp = temp -> next;
        counter++;
    }

    // Last Case After Traversing if I am at the last index then my next will be null
    if(temp->next == NULL){
        insertAtTail(tail, data);   
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;  
}


void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}


void getLength(Node* &head){
    Node* temp = head;

    int counter = 0;
    while(temp != NULL){
        temp = temp->next;
        counter++;
    }
    cout << "Length of the linkedlist is: " << counter << endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,12);
    insertAtHead(head,14);
    insertAtTail(tail,8);
    insertAtTail(tail,6);
    printLinkedList(head);
    insertAtPosition(head,tail, 33, 3);
    insertAtPosition(head,tail, 66, 1);
    insertAtPosition(head,tail, 99, 8);
    deleteFromPosition(head, 4);
    printLinkedList(head);

    // cout << "Your head is at: " << head->data << endl;
    // cout << "Your tail is at: " << tail->data << endl;

    return 0;
}

// class Node {
//     public:
//         int data; // data
//         Node* next; // pointer that will store address of next node

//     // Constructor
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

//     // Destructure
//     ~Node(){
//         int value = this->data;

//         if(this->next != NULL){
//             delete next;
//             this->next = NULL;    
//         }
//         cout << "Memory is free for Node with Data: " << value << endl;
//     }
// };


// void insertAtHead(Node* &head, int myData){
//     // Creating New Node
//     Node * temp = new Node(myData);
//     temp->next = head;
//     head = temp;
// }


// void insertAtTail(Node* &tail , int myData){
//      // Creating New Node
//     Node * temp = new Node(myData);
//     tail->next = temp;
//     tail = tail->next;
// }

// void insertAtPosition(Node* &head, int position, int myData){

//     Node * temp = head;
//     int counter = 1; // In the beginning head is at the first postion if I want to insert at 3rd 

//     // E.g I want to insert at n position and I have to traverse until i dont' reach at n-1
//     while(counter < position -1){
//         temp = temp->next; // traversing
//         counter++;
//     }


//     // Creating a node for myData
//     Node* nodeToInsert = new Node(myData);
//     // Because previous block contains the addresss of next block
//     nodeToInsert->next = temp->next; // temp contains the address of next block because I already have traversed till n-1
//     temp->next = nodeToInsert; // Assigning new address 
// }


// void deleteNodeFromPosition(int position, Node* &head){
//     // Cases 3: I want to delete from middle, start, last

//     // Deleting from start
//     if(position == 1){
//         // Memory Free for first node
//         Node* temp = head;
//         // Now pointing the head at 2nd index because I want to delete the first
//         head = head->next;
        
//         temp->next = NULL;
//         delete temp;
//     }else{
//     // Deleting from end or middle

//     Node* current = head;
//     Node* previous = NULL;
//     int counter = 1; // In the beginning head is at the first postion if I want to insert at 3rd 

//     // E.g I want to insert at n position and I have to traverse until i dont' reach at n-1
//     while(counter < position){
//         previous = current;
//         current = current->next; // traversing
//         counter++;
//     }
    
//     // E.g 10, 12, 14 and I want to delte 12, 10 is previous & 12 is current, now will connect 10.next with 14.next
//     previous->next = current->next;
//     current->next = NULL;
//     delete current;

//     }
// }

// void print(Node* &head){
//     // Because head is pass by reference so, i don't want to do changes in original head
//     // I'll create a temporary pointer then will assign head to it.
//     Node* temp = head;
//     // temp is the address so will check through loop until it does not equal to NULL
//     while(temp != NULL){
//         cout << temp->data << "   ";
//         // HINT: i = i + 1;
//         // In the beginning temp is at the first index, Now loop should traverse at the second index while temp.next already have the address of next index
//         temp = temp->next;
//     }
//     cout << endl;
// }



// int main(){
//     // Creating New node in the Heap Memory
//     Node* node1 = new Node(10);
//     // cout << node1->data << endl;
//     // cout << node1->next << endl;

//     // Pointing the head at node1
//     Node* head = node1;
//     // Pointing the tail at node1
//     Node* tail = node1;

//     print(head);

//     insertAtHead(head, 12);
//     insertAtHead(head, 14);
//     insertAtHead(head, 16);
//     insertAtTail(tail, 8);
//     insertAtTail(tail, 6);
//     insertAtTail(tail, 4);
//     insertAtTail(tail, 2);
//     insertAtPosition(head, 5, 50);


//     deleteNodeFromPosition(5, head);


//     print(head);

//     return 0;
// }