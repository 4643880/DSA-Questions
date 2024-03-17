#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int>  q;

    q.push(11);
    q.push(22);
    q.push(33);


    cout << q.front() << endl;
    cout << "Size of queue is: " << q.size() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << "Size of queue is: " << q.size() << endl;
    cout << "Check empty or not: " << q.empty() << endl;


    return 0;
}