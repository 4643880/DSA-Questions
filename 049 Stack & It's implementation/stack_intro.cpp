
#include<iostream>
// #include<stack>
using namespace std;

class Stack {
    // properties 
    public: 
        int *arr;
        int top;
        int size;


    // behaviours
    Stack(int size){
        this->size = size;
        this->arr = new int[size];
        top = -1;
    };

    void push(int element){
        top++;
        // check is there a space to insert new element e.g size is 3 top is at 2 then 3-2
        // |1|2|3|4||
        if(size - top >= 1){
            arr[top] =  element;
            cout << arr[top] << endl;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};


int main(){

    // creation of stack
    // stack<int> s;

    // push operation
    // s.push(2);
    // s.push(4);


    // pop operation
    // s.pop();
    // s.pop();

    // cout << "Printing Top Element: " << s.top() << endl;
    // cout << "Size of stack is: " << s.size() << endl;

    // if(s.empty()){
    //     cout << "Stack is empty" << endl;
    // }else{
    //     cout << "Stack is not empty" << endl;
    // }


    Stack st(3);

    st.push(10);
    st.push(15);
    st.push(20);
    st.push(21);

    cout << st.peek() << endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout << st.peek() << endl;

    
    if(st.isEmpty()){
        cout << "stack is empty" << endl;
    }else{
        cout << "stack is not empty" << endl;
    }


    
    return 0; 
}


// 28:43