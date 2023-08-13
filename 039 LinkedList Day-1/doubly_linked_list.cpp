


#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* previous;

    // Constructor
    Node(int myData){
        this->data = myData;
        this->previous = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for Node with Data: " << value << endl;
    }
};

int getLength(Node* &head){
    Node* temp = head;
    int counter = 0;

    while(temp != NULL){
        temp = temp->next;
        counter++;
    }
    return counter;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int myData){
    if(head == NULL){
        Node* temp = new Node(myData);
        head = temp; // In this case pointing the same node at head 
        tail = temp;
    }else{
        // HINT: temp.previous = null|12|temp.next = head->previous -- NULL|10|NULL 
        Node* temp = new Node(myData);

        temp->next = head;
        head->previous = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int myData){
    if(tail == NULL){
        Node* temp = new Node(myData);
        tail = temp; // In this case pointing the same node at tail
        head = temp;
    }else{
        Node* temp = new Node(myData);

        tail->next = temp;
        temp->previous = tail->next;
        tail = temp;
    }
}

void insertAtPosition(Node* &head , Node* &tail, int position, int myData ){
    Node* temp = head;
    int counter = 1;

    // //insert at Start
    if(position == 1) {
        insertAtHead(head,tail, myData);
        return;
    }

    while(counter < position-1){
        temp = temp->next;
        counter++;
    }

    // //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail, head, myData);
        return;
    }

    Node* nodeToInsert = new Node(myData);
    // |10| -- |12| -- |14|
    nodeToInsert->previous = temp;
    nodeToInsert->next = temp->next;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;

}


void deleteNodeFromPosition(int position, Node* &head){
    // Cases 3: I want to delete from middle, start, last

    // Deleting from start
    if(position == 1){

        // |12| -- |10|
        // Memory Free for first node
        Node* temp = head;
        // Now pointing the head at 2nd index because I want to delete the first
        head = head->next;
        temp->next->previous = NULL;         
        temp->next = NULL;

        delete temp;
    }else{
        // Deleting from end or middle
        Node* current = head;
        Node* previous = NULL;
        int counter = 1; // In the beginning head is at the first postion if I want to insert at 3rd 

        // E.g I want to insert at n position and I have to traverse until i dont' reach at n-1
        while(counter < position){
            previous = current;
            current = current->next; // traversing
            counter++;
        }
        
        // E.g 10, 12, 14 and I want to delte 12, 10 is previous & 12 is current
        //  |10| -- |12| -- |14|
        previous->next = current->next;
        current->next = NULL;
        current->previous = NULL;
        delete current;

    }
}

int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    int len = getLength(head);
    cout << "Length: " << len << endl;
    print(head);

    insertAtHead(head,tail, 12);
    insertAtHead(head,tail, 14);
    insertAtTail(tail,head, 8);
    insertAtTail(tail,head, 6);
    insertAtPosition(head,tail, 3, 50);

    print(head);
    deleteNodeFromPosition(5, head);
    print(head);


    int len1 = getLength(head);
    cout << "Length: " << len1 << endl;

    return 0;
}