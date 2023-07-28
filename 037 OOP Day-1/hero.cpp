



#include<iostream>
#include<cstring>
using namespace std;

// Code for shallow copy & deep copy default copy constructor will do shallow copy
class Hero {
    public: char *name;
    private: int health; 
    public: char level;

    static int timeToComplete;


    // getter setter for private variables
    int getHealth () {
        return health;
    }


    int setHealth(int Value){
        health = Value;
    }

    Hero(){
        name = new char[100];
        cout << "This is default constructor" << endl;
    }

    // Copy Contructor
    Hero(Hero& temp){
        // Doing Deep copy instead of shallow copy 
        
        // This is deep copy
        char *ch = new char[strlen(temp.name + 1)];
        strcpy(ch, temp.name);
        this->name = ch;


        cout << "Copy constructor called" << endl;
        // this->name = temp.name;
        this->level = temp.level;
        this->health = temp.health;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout << "[ " << this->name << " , " << this->level << " , "<< this->health << " ]" << endl;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor called " << endl;
    }

    
};

// Scope Resolution operator
int Hero::timeToComplete = 10;

/*

class Hero {
    public: string name;
    private: int health; 
    public: char level;


    // getter setter for private variables
    int getHealth () {
        return health;
    }


    int setHealth(int Value){
        health = Value;
    }

    Hero(){
        cout << "This is default constructor" << endl;
    }

    // Parameterized Constructor
    Hero(int health){
        cout << "Printing from parametarized Contructor, Address of obj is " << this << endl;
        this->health = health;
    }

    // Copy Contructor
    Hero(Hero& temp){
        cout << "Copy constructor called" << endl;
        this->name = temp.name;
        this->level = temp.level;
        this->health = temp.health;
    }

};

*/
