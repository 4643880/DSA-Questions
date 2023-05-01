#include<iostream>
#include<vector>
#include<array>

using namespace std;

int getLength(char name[]){
    int counter = 0;
    // C++ uses a marker, the null character, denoted by '\0', to indicate the end
    for(int i = 0; name[i] != '\0'; i++){        
        counter++;
    }
    return counter;
}

void reverseArr(char name[], int n){
    int start = 0;
    int end = n-1;
    
    while(start < end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}


int main(){

    char name[20];
    // Note: if i write Aizaz Haider then it will print just Aizaz because when we add space, tab or enter then char array store null terminator at the next index no  

    // E.g NO 1
    // cout << "Please Enter your name..." << endl;
    // cin >> name;
    // cout << "Your name is : " << name;





    // E.g No 2
    // cout << "Please Enter your name..." << endl;
    // cin >> name;

    // sotring null character at 2nd index, after null character it will terminate 
    // name[2] = '\0';

    // cout << "Your name is : " << name;




    // Find length of string
    cout << "Please Enter your name..." << endl;
    cin >> name;
    cout << "Your name is : " << name << endl;

    int len = getLength(name);    
    cout << "Length of your array is : " << len << endl;

    // Reverse Array 
    reverseArr(name, len);
    cout << name << endl;
    


    return 0;
}