
#include<iostream>


void insertAtBottom(stack<int> &stack, int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }


    int storeTopElementAgain = stack.top();
    stack.pop();

    insertAtBottom(stack, element);

    stack.push(storeTopElementAgain);

}



void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }

    int storeTopElement = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, storeTopElement);
}