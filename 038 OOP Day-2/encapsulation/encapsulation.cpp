
#include <iostream>
using namespace std;

class Student
{
    // Encapsulation means create private data member then access it through getter and setter
    // Encapsulation is the process of hiding the information while abstraction is the process of hiding the implementation
    
private:
    string name;
    int age;
    int height;

public:

    int getAge(){
        return this->age;
    }

};

int main()
{

   Student std1;
   cout << std1.getAge() << endl;

    return 0;
}