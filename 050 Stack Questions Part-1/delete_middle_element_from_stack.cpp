

#include <bits/stdc++.h> 

// |10|
// |8|
// |6|
// |4|
// |2|
// Need to remove mid => 6

// Note: For Printing don't forget to create copy otherwise during the printing it will pop origional stack
// Step 1: base case
// Step 2: store top element then pop it
// Step 3: recursive call with ++count or count+1, count++ will not work
// Step 4: push back the top element again into the stack


//  // Crating copy of stack
//  stack<int> copyStack = st;
//  while (!copyStack.empty())
//  {
//      cout << copyStack.top() << " ";
//      copyStack.pop();
//  }


void solve(stack<int>&inputStack,int count, int size){
   int mid = size/2;

   // Base Case
   if(count == mid){
      inputStack.pop();
      return;
   }

   // Storing the top element
   int topNum = inputStack.top();
   inputStack.pop();

   // Recursive Call
   solve(inputStack, ++count, size);

   // Pushing again top element
   inputStack.push(topNum);
}
void deleteMiddle(stack<int>&inputStack, int N){
   
   int count = 0;
   solve(inputStack, count, N);
}