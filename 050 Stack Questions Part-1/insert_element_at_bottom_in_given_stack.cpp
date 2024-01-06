
#include <bits/stdc++.h>
// Insert an element at bottom of given stack e.g x = 9
//     => |4|
// |4| => |7|
// |7| => |2|
// |2| => |5|
// |5| => |9|

void solve(stack<int>& myStack, int x){
    // Step 1: Base Case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    // Step 2: Storing the top element then pop it
    int top = myStack.top();
    myStack.pop();

    // Step 3: Recursive Call
    solve(myStack, x);

    // Step 4: Pushing back the stored element
    myStack.push(top);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}