


#include <iostream>
using namespace std;

class Human {
    public:
        int height;
        int weight;
    protected:
        int age;
    public:
    int getWeight(){
        return this->weight;
    }

    int setWeight(int w){
        this->weight = w;
    }
};


class Male : public Human {
    public:
        string color;
    
    void sleep(){
        cout << "Male is sleeping" << endl;
    }   
    // Because age is protected so, i can access here
    int getHeight(){
        return this->age;
    }
};

int main(){

    Male obj;

    // cout << obj.age << endl;
    cout << obj.setWeight(77) << endl;
    cout << obj.getWeight() << endl;

    return 0;
}

// 22:00