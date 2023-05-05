#include<iostream>
#include<string>

using namespace std;

char getMaxOccuringChar(string str){

    //created an array to count of characters
    int arr[26] = {0};    
    for(int i = 0; i < str.length(); i++ ){
        char ch = str[i]; 
        // b - a => 66 - 65 => 1
        int number = 0;
        number = ch - 'a';
        // arr[1] is a alphabets are between 1 to 26 
        arr[number]++;
    }

    //Find maximum occurance character
    int maxiValue = -1; 
    int index = 0;
    int ans = 0;
    for(int i =0 ; i < 26; i++){        
        if(maxiValue < arr[i]){
            index = i;
            maxiValue = arr[i];
        }
    }
    
    char finalAns =  'a' + index;
    return finalAns;
}


int main(){

    cout << "Please Enter a String e.g testsample => ans will be : 'e' " << endl;
    string str;
    cin >> str;

    cout << getMaxOccuringChar(str) << endl;
    
    return 0;
}