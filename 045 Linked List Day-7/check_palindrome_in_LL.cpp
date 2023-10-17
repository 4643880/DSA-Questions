
#include<iostream>
using namespace std;
#include<vector>

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
// ==================================================
// Approach 1 
// ==================================================

class Solution{
  private:
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int start = 0;
        int end = n -1;
        
        while(start < end){
            if(arr[start] == arr[end]){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }

  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;
        
        Node * temp = head;
        
        while(temp != NULL){
            arr.push_back(temp -> data);
            temp = temp -> next;
        }
        return checkPalindrome(arr);
    }
};


// ==================================================
// Approach 2 Optimized with less space complexity
// ==================================================
class Solution{
  private:
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
  private:
    Node* getReversedList(Node* head){
        //   1 2 3 => 3 2 1
        // p c n
        Node* current = head;
        Node* previous = NULL;
        Node* next = NULL;
        
        while(current != NULL){
            // befre cutting the pointer storing the remaining list to track it
            next = current -> next;
            // Cutting the current -> next pointer and pointing to previous 
            current -> next = previous;
            
            // Increase 1 step ahead for iteration
            previous = current;
            current = next;
        }
        return previous;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // if the list contains just 1 element
        if(head -> next == NULL){
            return true;
        }
        
        // Step 1: Find Mid
        Node* mid = getMid(head);
        
        // Step 2: Reverse Remaining List After Mid
        Node* temp = mid -> next;
        mid -> next = getReversedList(temp);
        
        // Step 3: Compare Both Halves
        Node* head1 = head;
        Node* head2 = mid -> next;
        
        while(head2 != NULL){
            if( head1 -> data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        // Step 4: Repeat Step 2 
        temp = mid -> next;
        mid -> next = getReversedList(temp);
        
        
        return true;
        
    }
};