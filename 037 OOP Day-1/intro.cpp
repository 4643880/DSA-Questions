
#include<iostream>
#include "hero.cpp"
using namespace std;



int main() {

    /*
    
    
    */
    Hero h1;
    h1.level = 'D';
    h1.setHealth(12);
    char name[10] = "Aizaz";
    h1.setName(name);


    h1.print();
    h1.name[0] = 'K';

    // Copy Constructor
    

    Hero h2(h1);
    h2.print();

    // Copy Assignment Operator
    h1 = h2;

    h1.print();
    h2.print();


    
    Hero *h3 = new Hero();
    delete h3;

    cout << Hero::timeToComplete << endl;
    


    /*    
    Hero h1;
    h1.setHealth(50);
    h1.level = 'c';

    // Copy Constructor
    Hero h2(h1);

    cout << "Health : " << h2.getHealth() << endl;
    cout << "Level : " << h2.level << endl;
    */


    /*  

    Hero obj(80);
    cout << "Address of Obj is: " << &obj << endl;


    Hero *obj2 = new Hero(70);
    cout << "Health: " << obj2->getHealth();
    
    */
    

    /*
    
    // Static Allocation
    Hero h1;
    h1.name = "Aizaz";
    h1.level = '3';
    h1.setHealth(100); 

    cout << "Name of h1 is : " << h1.name << endl;
    cout << "Level of h1 is : " << h1.level << endl;
    cout << "Health of h1 is : " << h1.getHealth() << endl;
    cout << "Size of h1 is " << sizeof(h1) << endl;


    // Dynamically Allocation
    Hero *h2 = new Hero(); // It's memory will be allocate in the heap

    h2->name = "Hameed";
    h2->level = '2';
    h2->setHealth(70); 
    cout << "Name of h2 is : " << (*h2).name << endl;
    cout << "Level of h2 is : " << h2->level << endl;
    cout << "Health of h2 is : " << (*h2).getHealth() << endl;
    cout << "Size of h2 is " << sizeof(*h2) << endl;
    
    */
    
    return 0;
}