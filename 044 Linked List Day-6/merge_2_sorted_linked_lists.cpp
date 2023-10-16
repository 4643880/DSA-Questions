

#include<iostream>
using namespace std;
#include<map>

template <typename T>
class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

Node<int>* solve(Node<int>* first, Node<int>* second){
    // will use window approach using current and next pointers
    // e.g 
    // (first) -> (1) -> (3) -> (5) -> (NULL Pointer)
    // (second) -> (2) -> (4) -> (5) -> (NULL Pointer)


    // if only one element is present in the 1st list
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    Node<int>* current1 = first;
    Node<int>* next1 = first -> next;
    Node<int>* current2 = second;
    Node<int>* next2 = NULL;

    while(next1 != NULL && current2 != NULL){
        if((current2 -> data >= current1 -> data) && (current2 -> data <= next1 -> data)){
            // add node in between 2 elements of 1st list
            current1 -> next = current2;
            next2 = current2 -> next;
            current2 -> next = next1;
            // e.g updating pointers for next iteration
            current1 = current1 -> next;
            current2 = next2;

        }else{
            // going to next window 
            current1 = current1 -> next;
            next1 = next1 -> next;

            // If list 1 has reached to last null pointer
            if(next1 == NULL){
                current1 -> next = current2;
                return first; 
            }

        }
    }

    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // if 1st list is empty
    if(first == NULL){
        return second;
    }

    // if 2nd list is empty
    if(second == NULL){
        return first;
    }

    // if the first list has starting value < than second list
    if(first -> data < second -> data){
        return solve(first, second);
    }else{
        return solve(second, first);
    }
    
}