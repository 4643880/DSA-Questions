
#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
};

node* findMid(node *head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next;
        slow = slow -> next;
    }   

    return slow;         
}


node* merge(node* left, node* right){
    // if first list is empty
    if(left == NULL){
        return right;
    }

    // if second list is empty
    if(right == NULL){
        return left;
    }

    node* ans = new node(-1); // dummy node that contain -1
    node* temp = ans;

    while(left != NULL && right != NULL){
        // if the first list has starting value < than second list
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;

            left = left -> next;
        }else{
            temp -> next = right;
            temp = right;

            right = right -> next;
        }
    }
    
    while(left != NULL){
        temp -> next = left;
        temp = left;

        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = right;

        right = right -> next;
    }

    ans = ans -> next; // because ans is dummy node that contains -1
    return ans;
}

node* mergeSort(node *head) {
    // base case if linked list empty or just contains only one element
    if(head == NULL || head -> next == NULL){
        return head;
    }

    // Finding Mid
    node* mid = findMid(head);

    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL; // pointing last one NULL of the left 


    // Recursive calls
    left = mergeSort(left);
    right = mergeSort(right);

    // Merge both right and left halves
    node* result = merge(left, right);

    return result;
    
}