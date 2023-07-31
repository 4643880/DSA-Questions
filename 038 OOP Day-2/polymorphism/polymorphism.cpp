

#include<iostream>
using namespace std;

class A {

    // Function names are same but their signatures are different 
    public:
    void sayHello() {
        cout << "Hello Aizaz 1" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Aizaz 2" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    // Operator Overloading Starts here
    // + operator can add and also can concatenate 2 strings but i want that + operator should subtract 2 values
    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        
        cout << "Hello Aizaz" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    // Runtime polymorphism, Method Overriding 
    Dog obj;
    obj.speak();



    // Below are the examples of compile time polymorphism , Method Overloading & Operator Overloading

    /*
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    // + operator overload 
    obj1 + obj2;

    // Bracket Overload Example 
    obj1();
    */   




    /*
    A obj;
    obj.sayHello();
    obj.sayHello('a');
    obj.sayHello("Aizaz");
    */
    



    return 0;
}