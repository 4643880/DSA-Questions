#include<iostream>
using namespace std;
#include<map>

struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

class Solution
{
    private:
    Node* insertAtTail(Node * &head, Node * &tail, int data){
        Node* newNode = new Node(data);
        // if list is empty
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            // list is not empty
            tail -> next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        // Step 1: create a clone list using next pointer of origional list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        
        // Step 2: create a map (e.g Origional node data : Clone node data)
        map<Node* , Node*> mapping;
        Node* temp1 = head; // origional list head
        Node* temp2 = cloneHead; // clone list head
        
        while(temp1 != NULL && temp2 != NULL){
            mapping[temp1] = temp2;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        // Reset heads and set the random pointers with the help of mapping
        temp1 = head; // origional list head
        temp2 = cloneHead; // clone list head
        
        while(temp1 != NULL){
            temp2 -> arb = mapping[temp1 -> arb]; // arb means random pointer just like next
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        return cloneHead;
    }

};