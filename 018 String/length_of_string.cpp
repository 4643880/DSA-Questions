#include<iostream>
using namespace std;

int getLength(char name[]){
    int counter = 0;
    // C++ uses a marker, the null character, denoted by '\0', to indicate the end
    for(int i = 0; name[i] != '\0'; i++){        
        counter++;
    }
    return counter;
}

int main(){

    char name[20];    
    cout << "Please Enter your name..." << endl;
    cin >> name;

    cout << "Your name is : " << name << endl;

    // Find length of string
    int ans = getLength(name);
    cout << "Length of your array is : " << ans << endl;

    return 0;
}