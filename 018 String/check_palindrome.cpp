#include<iostream>
#include<string>
#include<array>

using namespace std;

char toLowerCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        // Substracting the ASCII value of Capital A then add ASCII value of small a,        
        char temp = ch - 'A' + 'a';
        return temp;
    }else{
        return ch;
    }
}

bool checkPalindrome(char str[], int n){
    int start = 0;
    int end = n-1;    
    
    while(start < end){
        if(toLowerCase(str[start]) == toLowerCase(str[end])){            
            start++;
            end--;
        }else{
            return false;
        }                
    }
    return true;
}

int getLength(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++ ){
        counter++;
    }
    return counter;
}

int main(){

    char myString1[5] = {'a','B','c','b','a'}; 
    char myString2[4] = {'N','o','o','n'}; 

    bool result1 = checkPalindrome(myString2,4);
    cout << "Your result is : " << result1 << endl;

    cout << toLowerCase('C') << endl;

    char name[20];
    cin >> name;

    int len = getLength(name);
    cout << len << endl;

    bool result2 = checkPalindrome(name,len);
    cout << "Your result is: " << result2 << endl;

    
    return 0;
}