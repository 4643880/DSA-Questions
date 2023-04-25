#include<iostream>
#include<map>
using namespace std;


int main(){
    //===============================================================
    // Map (stores in the form of key value)
    //===============================================================
    
    map<int, string> m;
    m[1] = "Aizaz";
    m[2] = "Hussain";
    m[3] = "Hamza";
    m.insert({4,"Qasim"});

    
    for(int i = 1; i <= m.size() ; i++){
        cout << i << " : " << m[i] << endl;
    }

    


    return 0;
}