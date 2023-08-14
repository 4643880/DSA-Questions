

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int myData){
        this->data = myData;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free for Node with Data: " << value << endl;
    }
};

// In the circular linkedlist we don't need head pointer just we can perform both actions using tail pointer 
void insertNode(Node* &tail, int element, int value){
    // Empty List: if the element does not exists in the list
    // 10|next, next will point to itself
    if(tail == NULL){
        Node* temp = new Node(value);

        temp->next = temp;
        tail = temp;
    }else {
        // NON Empty List: Assuming that the element already exists in the list
        // 10|next -- 12|next 14|next , 10 & 14 already exists now will insert 12
        Node* temp = tail;

        while(temp->data != element){
            temp = temp->next;
        }// After Traversing, have reached to exact position 

        Node* nodeToInsert = new Node(value);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }    
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }else{
        // 10|next -- 12|next -- 14|next , I want to delete 12
        Node* previous = tail;
        Node* current = previous->next;

        while(current->data != value){
            previous = current;
            current = current->next;
        }
        
        // E.g I want to delete 10 which is the first element & its previous is 14 in circular        
        previous->next = current->next;        

        if(current == tail){
            tail = previous; // tail will point anywhere because it's circular
        }

        // E.g I have just one node in the list current and previous both will be at same node, so that do while loop could not access the tail
        if(current == previous){
            tail = NULL;
        }

        current->next = NULL;
        delete current;

    }
}

void print(Node* tail){
    // Storing the address into temp the will compare the condition in the while loop
    Node* temp = tail;

    do {
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);
    cout << endl;
}

int main(){

    Node* tail = NULL;
    // Inserting in Empty List, inserting 3
    insertNode(tail, 5, 3);
    print(tail);

    // Inserting After element, after 3 inserting 5
    insertNode(tail, 3, 5);
    print(tail);

    // Inserting After element, after 5 inserting 7
    insertNode(tail, 5, 7);
    print(tail);

    // Inserting in Middle, after 3 inserting 50
    insertNode(tail, 3, 50);
    print(tail);

    deleteNode(tail, 50);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}