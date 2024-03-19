
#include<iostream>
using namespace std;


class Node{
    public: 
    int data;
    Node* next;
    Node* previous;

    // Creating constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }
};

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


void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // Creating new node
        Node* newNode = new Node(data);
        newNode->previous = NULL;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->next = NULL;
        newNode->previous = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    // Inserting at start
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    
    Node* temp = head;
    int counter = 1;

    while(counter < position-1){
        temp = temp->next;
        counter++;
    }

    // inserting at the last position
    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    // inserting in the middle
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->previous = temp;    
    newNode->next->previous = newNode;
}

void deleteAtPosition(Node* &head, Node* &tail, int position){
    Node* temp = head;

    // Starting Case
    if(position == 1){
        temp->next->previous = NULL;        
        head = temp->next;        
        temp->next = NULL;
        temp->previous = NULL;
        delete temp;
        return;
    }
    // Traversing to the exact position
    int counter = 1;
    Node* previous = NULL;
    while(counter < position){
        previous = temp;
        temp = temp->next;
        counter++;
    }
    // handling last case after traversing have reached at the end
    if(temp->next == NULL){
        previous->next = NULL;
        temp->next = NULL;
        temp->previous = NULL;
        delete temp;
        return;
    }

    // Middle Case
    previous->next = temp->next;
    temp->next->previous = previous;
    temp->next = NULL;
    temp->previous = NULL;
    delete temp;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 15);
    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 3);
    
    insertAtPosition(head, tail, 33, 1);
    insertAtPosition(head, tail, 33, 4);
    insertAtPosition(head, tail, 33, 8);
    printLinkedList(head);    
    deleteAtPosition(head, tail, 4);
    deleteAtPosition(head, tail, 1);
    deleteAtPosition(head, tail, 6);
    printLinkedList(head);
    getLength(head);
    
    
    cout << "Your head is at: " << head->data << endl;
    cout << "Your tail is at: " << tail->data << endl;

    return 0;
}



// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* previous;

//     // Constructor
//     Node(int myData){
//         this->data = myData;
//         this->previous = NULL;
//         this->next = NULL;
//     }

//     // Destructor
//     ~Node(){
//         int value = this->data;
//         if(this->next != NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout << "Memory is free for Node with Data: " << value << endl;
//     }
// };

// int getLength(Node* &head){
//     Node* temp = head;
//     int counter = 0;

//     while(temp != NULL){
//         temp = temp->next;
//         counter++;
//     }
//     return counter;
// }

// void print(Node* &head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }cout << endl;
// }

// void insertAtHead(Node* &head, Node* &tail, int myData){
//     if(head == NULL){
//         Node* temp = new Node(myData);
//         head = temp; // In this case pointing the same node at head 
//         tail = temp;
//     }else{
//         // HINT: temp.previous = null|12|temp.next = head->previous -- NULL|10|NULL 
//         Node* temp = new Node(myData);

//         temp->next = head;
//         head->previous = temp;
//         head = temp;
//     }
// }

// void insertAtTail(Node* &tail, Node* &head, int myData){
//     if(tail == NULL){
//         Node* temp = new Node(myData);
//         tail = temp; // In this case pointing the same node at tail
//         head = temp;
//     }else{
//         Node* temp = new Node(myData);

//         tail->next = temp;
//         temp->previous = tail->next;
//         tail = temp;
//     }
// }

// void insertAtPosition(Node* &head , Node* &tail, int position, int myData ){
//     Node* temp = head;
//     int counter = 1;

//     // //insert at Start
//     if(position == 1) {
//         insertAtHead(head,tail, myData);
//         return;
//     }

//     while(counter < position-1){
//         temp = temp->next;
//         counter++;
//     }

//     // //inserting at Last Position
//     if(temp -> next == NULL) {
//         insertAtTail(tail, head, myData);
//         return;
//     }

//     Node* nodeToInsert = new Node(myData);
//     // |10| -- |12| -- |14|
//     nodeToInsert->previous = temp;
//     nodeToInsert->next = temp->next;
//     temp->next->previous = nodeToInsert;
//     temp->next = nodeToInsert;

// }


// void deleteNodeFromPosition(int position, Node* &head){
//     // Cases 3: I want to delete from middle, start, last

//     // Deleting from start
//     if(position == 1){

//         // |12| -- |10|
//         // Memory Free for first node
//         Node* temp = head;
//         // Now pointing the head at 2nd index because I want to delete the first
//         head = head->next;
//         temp->next->previous = NULL;         
//         temp->next = NULL;

//         delete temp;
//     }else{
//         // Deleting from end or middle
//         Node* current = head;
//         Node* previous = NULL;
//         int counter = 1; // In the beginning head is at the first postion if I want to insert at 3rd 

//         // E.g I want to insert at n position and I have to traverse until i dont' reach at n-1
//         while(counter < position){
//             previous = current;
//             current = current->next; // traversing
//             counter++;
//         }
        
//         // E.g 10, 12, 14 and I want to delte 12, 10 is previous & 12 is current
//         //  |10| -- |12| -- |14|
//         previous->next = current->next;
//         current->next = NULL;
//         current->previous = NULL;
//         delete current;

//     }
// }

// int main(){

//     // Node* node1 = new Node(10);
//     Node* head = NULL;
//     Node* tail = NULL;

//     int len = getLength(head);
//     cout << "Length: " << len << endl;
//     print(head);

//     insertAtHead(head,tail, 12);
//     insertAtHead(head,tail, 14);
//     insertAtTail(tail,head, 8);
//     insertAtTail(tail,head, 6);
//     insertAtPosition(head,tail, 3, 50);

//     print(head);
//     deleteNodeFromPosition(5, head);
//     print(head);


//     int len1 = getLength(head);
//     cout << "Length: " << len1 << endl;

//     return 0;
// }