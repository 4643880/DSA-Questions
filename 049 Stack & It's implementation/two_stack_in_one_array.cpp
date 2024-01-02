

#include<iostream>

class TwoStack {
// Insertion for the stack 1 will be left to right in the array
// Insertion for the stack 2 will be right to left in the array
public:
    int *arr;
    int size;
    int top1;
    int top2;
    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        this->arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // |1|2|3|4||
        if(top2 - top1 > 1){ // size - top e.g 5-4= 1 it means can push
            // top increasing inside if that's why using > 1 otherwise >= but that creates
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // |1|2|3|4||
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num; 
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // |1|2|3|4||
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;

        }else{
            return -1;
        }
    }
};