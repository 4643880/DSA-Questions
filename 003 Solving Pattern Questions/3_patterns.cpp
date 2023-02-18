


#include<iostream>
using namespace std;

int main(){
    // ===================================
            // Pattern No 3
    // ===================================
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        
        int j = 1;
        while(j <= n){
            cout << " " << j ; 
            j++;
        }
        cout << endl;

        i++;
    } 
    */




    // ===================================
            // Pattern No 4
    // ===================================
    // HINT n-j+1

// 3 2 1
// 3 2 1
// 3 2 1


    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        
        int j = 1;
        while(j <= n){
            cout << n-j+1 << " " ; 
            j++;
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 5
    // ===================================
    
// n = 3
// 1 2 3
// 4 5 6
// 7 8 9


    
    /* int n;
    cin >> n;

    int i = 1;   
    int count = 1;
    while(i <= n){
        
        int j = 1;
        while(j <= n){
            cout << count << " "; 
            j++;
            count++;
        }
        cout << endl;

        i++;
    }
    */
    



    // ===================================
            // Pattern No 6
    // ===================================
// * 
// * *
// * * *
// * * * *

    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= i){
            cout << "*" << " "; 
            j++;
        }
        cout << endl;

        i++;
    }
    */


    // ===================================
            // Pattern No 7
    // ===================================
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

    /*
    int n;
    cin >> n;

    int i = 1;   
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= i){
            cout << i << " "; 
            j++;
        }
        cout << endl;

        i++;
    }
    */
    
   

    // ===================================
            // Pattern No 8
    // ===================================
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

    /*
    int n;
    cin >> n;

    int i = 1;  
    int count = 1;
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= i){
            cout << count << " "; 
            j++;
            count++;
        }
        cout << endl;

        i++;
    }    
    */



    // ===================================
            // Pattern No 9
    // ===================================

// COUNTING STARTING FROM ROW NUMBER
// 1 
// 2 3
// 3 4 5 
// 4 5 6 7 

    /*
    int n;
    cin >> n;

    int i = 1;  
    int count = 1;
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        int value = i;
        while(j <= i){
            cout << value << " "; 
            value++;
            j++;
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 10
    // ===================================
    // i-j+1 formula works
// COUNTING STARTING FROM ROW NUMBER

// 1 
// 2 1
// 3 2 1
// 4 3 2 1

    /*
    int n;
    cin >> n;

    int i = 1;  
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= i){
            cout << (i-j+1) << " "; 
            j++;
        }
        cout << endl;

        i++;
    }
    */




    // ===================================
            // Pattern No 11
    // ===================================


//  => char will use ascii code
// => Formula ("A"+i-1)
// A A A 
// B B B
// C C C

    /*
    int n;
    cin >> n;

    int i = 1;  
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= n){
            char ch = ('A'+i-1);
            cout << ch << " ";             
            j++;
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 12
    // ===================================


//  => char will use ascii code
// => Formula ('A' +j - 1 )
// A B C 
// A B C
// A B C
    /*
    int n;
    cin >> n;

    int i = 1;  
    while(i <= n){
        // cout << i << endl;
        int j = 1;
        while(j <= n){
            char ch = ('A' +j - 1 );
            cout << ch << " ";             
            j++;
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 13
    // ===================================


//  => char will use ascii code
// => Formula ('A' + value )
// A B C 
// D E F
// G H I

    /*
        int n;
    cin >> n;

    int i = 1;  
    int value = 0;    
    while(i <= n){
        int j = 1;        
        while(j <= n){                    
            char ch = ('A' + value);
            cout << ch << " ";             
            j++;
            value++;
            
        }
        cout << endl;

        i++;
    }
    */


    // ===================================
            // Pattern No 14
    // ===================================


//  => char will use ascii code
// => Formula ('A' +i +j -2) Learn how to make formula

// Starts From Row Number
// A B C 
// B C D
// C D E

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){
        int j = 1;     
        while(j <= n){                            
            char ch = ('A' +i +j -2);
            cout << ch << " ";
            j++;            
        }
        cout << endl;

        i++;
    }
    */


    // ===================================
            // Pattern No 15
    // ===================================
// A
// B B
// C C C 
// D D D D

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){
        int j = 1;     
        while(j <= i){                            
            char ch = ('A' +i -1);
            cout << ch << " ";
            j++;            
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 16
    // ===================================

// A
// B C 
// C D E 
// D E F G

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){
        int j = 1;     
        while(j <= i){                            
            char ch = ('A' +i +j -2);
            cout << ch << " ";
            j++;            
        }
        cout << endl;

        i++;
    }
    */



    // ===================================
            // Pattern No 17
    // ===================================
// D 
// C D
// B C D
// A B C D

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){
        
        // cout << i << endl;
        int j = 1;
        while(j <= i){
            char ch = ('A' +n -i +j -1);
            cout << ch << " " ;
            j++; 
        }
        cout << endl;
        i++;
    }
    */

    

    // ===================================
            // Pattern No 18
    // ===================================
//  -  -  -  * 
//  -  -  *  *
//  -  *  *  *
//  *  *  *  *

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){

        int j = 1;
        while(j <= n-i){
            cout << " - ";
            j++;
        }


        int k = 1;
        while(k <= i){
            cout << " * ";
            k++;            
        }
        cout << endl;
        
        
        i++;
    }
    */
    


    // ===================================
            // Pattern No 19
    // ===================================
// * * * * 
// * * *
// * *
// *

    /*
    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){

        int j = 1;
        while(j <= n-i+1){
            cout << "* ";
            j++;
        }
        cout << endl;
       
        i++;
    }
    */
    




    // ===================================
            // Pattern No 20
    // ===================================
//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

    int n;
    cin >> n;

    int i = 1;    
    while(i <= n){

        // First Triangle
        int j = 1;
        while(j <= n-i){
            cout << "  ";
            j++;
        }


        // Second Triangle
        int k = 1;
        while(k <= i){
            cout << k << " ";
            k++;
        }
        


        // Third Triangle
        int m = 1;
        int value = i-1;
        while(m <= i-1){
            cout << value << " ";
            m++;
            value--;
        }
        cout << endl;

        i++;
    }

}