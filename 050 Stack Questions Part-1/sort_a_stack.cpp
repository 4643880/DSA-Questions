#include<iostream>


void insertInSortedWay(stack<int> &stack, int element){
	if(stack.empty() || (!stack.empty() && element > stack.top()) ){
		stack.push(element);
		return;
	}

	int storeTopElement = stack.top();
	stack.pop();

	insertInSortedWay(stack , element);

	stack.push(storeTopElement);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int storeTopElement = stack.top();
	stack.pop();

	sortStack(stack);

	insertInSortedWay(stack, storeTopElement);
}