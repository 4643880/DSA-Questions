
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


// Remove Duplicated From Sorted Linked List
Node * removeDuplicatesFromSortedLinkedList(Node *head)
{
    // If the list is empty
    if(head == NULL){
        return NULL;
    }

    // Non Empty List
    Node* current = head;
    
    while(current != NULL){
        if((current -> next != NULL) && current -> data == current -> next -> data ){
            // 2 - 2 - 4  remove 2nd element 2, pointing first 2 to the 4
            Node* next_next = current -> next -> next;
            Node* nodeToDelete = current -> next;
            
            delete(nodeToDelete);
            current -> next = next_next;
            
        }else{
            current = current -> next;
        }
    }

    return head;
    
}

// Remove Duplicates From Unsorted Linked List
Node *removeDuplicatesFromUnsortedLinkedList(Node *head)
{
    if (head == NULL) {
        return NULL;
    }

    Node* current = head;
    std::map<int, bool> visited;

    while (current != NULL) {
        visited[current->data] = true;

        if (current->next != NULL && visited[current->next->data] == true) {
            Node* nodeToDelete = current->next;
            current->next = current->next->next;
            delete nodeToDelete;
        } else {
            current = current->next;
        }
    }

    return head;
}